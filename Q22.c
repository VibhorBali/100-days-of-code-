#include <stdio.h>

int main() {

    int a, b;
    int integerresult;
    float floatresult;

    printf("Enter the first number:");
    scanf("%d", &a );

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Integer division = %d\n", integerresult = a/b);
    printf("Float division = %.2f\n", floatresult = (float)a/b);

    return 0;
}