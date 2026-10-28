#include <stdio.h>

void maximumWindow(int a[], int n, int k)
{
    for(int i = 0; i <= n - k; i++)
    {
        int maximum = a[i];
        for(int j = i; j < i + k; j++)
        {
            if(a[j] > maximum)
            {
                maximum = a[j];
            }
        }
        printf("%d ", maximum);
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

    maximumWindow(a, n, k);

    return 0;
}