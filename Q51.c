#include <stdio.h>

void mergeArray(int a[], int m, int b[], int n)
{
    int c[m + n];
    int k = 0;
    for(int i = 0; i < m; i++)
    {
        c[k] = a[i];
        k++;
    }
    for(int i = 0; i < n; i++)
    {
        c[k] = b[i];
        k++;
    }
    for(int i = 0; i < m + n; i++)
    {
        for(int j = i + 1; j < m + n; j++)
        {
            if(c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }
}

int main()
{
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter first sorted array: ");
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter second sorted array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    mergeArray(a, m, b, n);
    return 0;
}