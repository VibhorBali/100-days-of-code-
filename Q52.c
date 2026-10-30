#include <stdio.h>

int missingNumber(int arr[], int n)
{
    int total = 0;
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        total = total + i;
    }
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return total - sum;
}
int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", missingNumber(arr, n));

    return 0;
}