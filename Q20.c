#include <stdio.h>

int main() {
    int days;

    printf("Enter days late: ");
    scanf("%d", &days);

    if (days <= 5) {
        printf("Total Fine = Rs. %d\n", days * 2);
    }
    else if (days <= 10) {
        printf("Total Fine = Rs. %d\n", days * 4);
    }
    else if (days <= 30) {
        printf("Total Fine = Rs. %d\n", days * 6);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
