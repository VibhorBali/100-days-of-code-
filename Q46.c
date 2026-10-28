#include <stdio.h>

int kadane(int a[], int n)
{
    int currentSum = a[0];
    int maximumSum = a[0];
    for(int i = 1; i < n; i++)
    {
        if(currentSum + a[i] > a[i])
        {
            currentSum = currentSum + a[i];
        }
        else
        {
            currentSum = a[i];
        }
        if(currentSum > maximumSum)
        {
            maximumSum = currentSum;
        }
    }
    return maximumSum;
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
    printf("%d", kadane(a, n));

    return 0;
}