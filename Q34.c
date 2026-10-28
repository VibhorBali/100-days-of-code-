#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcd";
    int len = strlen(str);

    printf("All sub-strings of \"%s\" are:\n\n", str);

     for (int start = 0; start < len; start++) {
        
          for (int end = start; end < len; end++) {
            
            
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            
            printf("\n"); 
        }
    }
    return 0;
}
