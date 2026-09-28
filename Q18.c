#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 1:
            printf("Month: January, Days: 31\n");
            break;
        case 3:
            printf("Month: March, Days: 31\n");
            break;
        case 5:
            printf("Month: May, Days: 31\n");
            break;
        case 7:
            printf("Month: July, Days: 31\n");
            break;
        case 8:
            printf("Month: August, Days: 31\n");
            break;
        case 10:
            printf("Month: October, Days: 31\n");
            break;
        case 12:
            printf("Month: December, Days: 31\n");
            break;

        case 4:
            printf("Month: April, Days: 30\n");
            break;
        case 6:
            printf("Month: June, Days: 30\n");
            break;
        case 9:
            printf("Month: September, Days: 30\n");
            break;
        case 11:
            printf("Month: November, Days: 30\n");
            break;

        case 2:
            printf("Month: February, Days: 28 or 29 (Leap Year)\n");
            break;

        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
