#include <stdio.h>

int main() {
    int n;
    int i;
    int sum;

    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1) {
        sum = sum + i;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
