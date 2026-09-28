#include <stdio.h>
#include <math.h> 
int main() {
    float principal, rate, time;
    float simple_interest, total_amount, compound_interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.0;

    total_amount = principal * pow((1.0 + (rate / 100.0)), time);
    compound_interest = total_amount - principal;

    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
