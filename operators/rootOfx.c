// write a program to accept the number get cube root , fourth root and hundresroots of given number.
#include <stdio.h>
#include <math.h>
int main() {
    double num,  cubeRoot , fourthRoot, hundredRoot;
    // Accept number from user
    printf("Enter a number: ");
    scanf("%lf", &num);
    // Calculate roots
    cubeRoot = pow(num, 1.0 / 3);
    fourthRoot = pow(num, 1.0 / 4);
    hundredRoot = pow(num, 1.0 / 100);
    // Print results
    printf("The cube root of %.2lf is: %.5lf\n", num, cubeRoot);
    printf("The fourth root of %.2lf is: %.5lf\n", num, fourthRoot);
    printf("The hundredth root of %.2lf is: %.5lf\n", num, hundredRoot);    

  
    return 0;
}

