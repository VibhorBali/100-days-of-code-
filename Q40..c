#include <stdio.h>

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
    for(int i = 0; i < n; i++)
    {
        int answer = -1;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                answer = a[j];
                break;
            }
        }
        printf("%d ", answer);
    }
    return 0;
}