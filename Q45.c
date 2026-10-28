#include <stdio.h>

void firstNegative(int a[], int n, int k)
{
    for(int i = 0; i <= n - k; i++)
    {
        int negative = 0;
        for(int j = i; j < i + k; j++)
        {
            if(a[j] < 0)
            {
                negative = a[j];
                break;
            }
        }
        printf("%d ", negative);
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
    firstNegative(a, n, k);

    return 0;
}