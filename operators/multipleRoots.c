// write a program to accept the number get cube root , fourth root and hundresroots of given number

#include <stdio.h>
#include <math.h>

int main() {
    double num, root;
    int roots;

    // Accept number from user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Accept which root to calculate
    printf("Enter the root value : ");
    scanf("%d", &roots);

    // Calculate root
    root = pow(num, 1.0 / roots);

    // Print result
    printf("The %d-th root of %.2lf is: %.5lf\n", roots, num, root);

    return 0;
}
