// write a program to find the compund interest.
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input values
    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);
    // Calculate compound interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output results
    printf("Final Amount = %.2lf\n", amount);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
