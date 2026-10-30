#include <stdio.h>

int main()
{
    int n, i = 2, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is not a prime number.", n);
        return 0;
    }

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }

        i++;
    }

    if (flag == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}