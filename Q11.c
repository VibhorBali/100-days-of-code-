#include <stdio.h>

int main() {
    char ch;

    // 1. Ask the user to type a letter
    printf("Enter a letter: ");
    scanf("%c", &ch);

    // 2. Check if the letter matches any vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("It is a vowel.\n");
    } 
    else {
        printf("It is a consonant.\n");
    }

    return 0;
}
__has_attribute