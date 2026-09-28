#include <stdio.h>

int main() {
    float percent;

    // 1. Get the percentage from the user
    printf("Enter percentage: ");
    scanf("%f", &percent);

    // 2. Check the score from highest to lowest
    if (percent >= 90) {
        printf("Grade A\n");
    }
    else if (percent >= 80) {
        printf("Grade B\n");
    }
    else if (percent >= 70) {
        printf("Grade C\n");
    }
    else if (percent >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}
