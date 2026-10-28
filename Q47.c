#include <stdio.h>

void sortArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    sortArray(a, n);

    printf("%d", a[k - 1]);

    return 0;
}