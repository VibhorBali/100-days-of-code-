#include <stdio.h>

int main()
{
    int a, b, x, y, temp;
    int gcd, lcm;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    x = a;
    y = b;

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    lcm = (a / gcd) * b;

    printf("LCM = %d", lcm);

    return 0;
}