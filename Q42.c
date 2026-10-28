#include <stdio.h>

void productArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int product = 1;

        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * a[j];
            }
        }

        printf("%d ", product);
    }
}
int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    productArray(a, n);

    return 0;
}