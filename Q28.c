#include <stdio.h>

int main() {
    char str[] = "Vibhor";
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n"); 

    return 0;
}
