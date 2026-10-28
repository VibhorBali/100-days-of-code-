#include <stdio.h>

int main()
{
    int n, x, ans = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter sorted array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= x)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);

    return 0;
}