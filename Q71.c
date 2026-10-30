#include <stdio.h>

int main()
{
    int n, first, last, temp;
    int place = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("Number after swapping = %d", n);
        return 0;
    }

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    middle = (n % place) / 10;

    result = last * place + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}