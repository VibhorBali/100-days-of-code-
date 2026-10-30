#include <stdio.h>

int repeatedElement(int arr[], int n)
{
    int seen[100] = {0};

    for(int i = 0; i < n; i++)
    {
        if(seen[arr[i]] == 1)
        {
            return arr[i];
        }

        seen[arr[i]] = 1;
    }
    return -1;
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

    printf("%d", repeatedElement(arr, n));

    return 0;
}