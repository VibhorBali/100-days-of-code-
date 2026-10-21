#include <stdio.h>

int main() {
    char str[] = "14 Vibhor 12121";
    char search_ch = '1'; 
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == search_ch) {
            count++;
        }
    }

    printf("The character '%c' appears %d times.\n", search_ch, count);

    return 0;
}
