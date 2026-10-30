#include <stdio.h>

void twoSum(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
                return;
            }
        }
    }

    printf("-1 -1");
}
int main()
{
    int n, target;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);

    twoSum(arr, n, target);

    return 0;
}