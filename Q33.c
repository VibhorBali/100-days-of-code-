#include <stdio.h>

int main() {
    
    char original_dates[99][11] = {
        "15/04/2026",
        "01/04/2023",
        "29/04/1999"
    };
    
    
    char new_dates[99][12]; 
    
    int day, year;
    int total_strings = 3;

    printf("--- Converting Formats ---\n\n");

    for (int i = 0; i < total_strings; i++) {
        
        
        sscanf(original_dates[i], "%d/04/%d", &day, &year);
        
        
        sprintf(new_dates[i], "%02d-apr-%04d", day, year);
        
        
        printf("Original: %s  -->  New: %s\n", original_dates[i], new_dates[i]);
    }

    return 0;
}
