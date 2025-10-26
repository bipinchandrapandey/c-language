// write program to accept number and check number is rational number or not
#include <stdio.h>

int main()
{
    int num, den;
    float result;
    printf("Enter numerator and denominator: ");
    scanf("%d%d", &num, &den);
    if (den == 0)
    {
        printf("Number is not a rational number");
    }
    else
    {
        result = (float)num / den;
        printf("Number is a rational number: %f", result);
    }
    return 0;
}
