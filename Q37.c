#include <stdio.h>

int main()
{
    int n;
    int answer = -1;

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
        int left = 0;
        int right = 0;

        for(int j = 0; j < i; j++)
        {
            left = left + a[j];
        }

        for(int j = i + 1; j < n; j++)
        {
            right = right + a[j];
        }

        if(left == right)
        {
            answer = i;
            break;
        }
    }

    printf("%d", answer);

    return 0;
}