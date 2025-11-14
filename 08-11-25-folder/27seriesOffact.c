#include <stdio.h>
#include <conio.h>

void main() {
    int num, i; 
    float fact = 1, sumOfseries = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact *= i;
        printf("%d/%d! = %.4f\n", num,i, num/fact);
        sumOfseries += num / fact;
    }

    printf("\nSum of the series = %.4f", sumOfseries);

    getch();
}


