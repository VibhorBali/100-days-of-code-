#include <stdio.h>

int main() {
    char str[] = "Vibhor";
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    printf("The string has %d characters.\n", count);

    return 0;
}
 