#include <stdio.h>

int main() {
    char str[] = "radar"; 
    int len = 0;

    
    while (str[len] != '\0') {
        len++;
    }

    int start = 0;
    int end = len - 1;
    int mismatches = 0; 

    while (start < end) {
        if (str[start] != str[end]) {
            mismatches++; 
        }
        start++; 
        end--;   
    }

    if (mismatches == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
