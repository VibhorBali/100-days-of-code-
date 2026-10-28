#include <stdio.h>

int main()
{
    int n, answer = -1;
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
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count > n / 2)
        {
            answer = a[i];
            break;
        }
    }
    printf("%d", answer);
    return 0;
}