#include <stdio.h>

int main() {
    char str[] = "Vibor 14? ";
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch >= 'a' && ch <= 'z') {  
        }
        else if (ch >= 'A' && ch <= 'Z') {  
        }
        else {
            special_chars++;
        }
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special_chars);

    return 0;
}
