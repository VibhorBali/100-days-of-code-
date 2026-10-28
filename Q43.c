#include <stdio.h>

int maxSum(int *arr, int n, int k)
{
    int max = 0;
    for(int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for(int j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }
        if(i == 0 || sum > max)
        {
            max = sum;
        }
    }

    return max;
}
int main()
{
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    printf("%d", maxSum(arr, n, k));

    return 0;
}