#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>

void main() {
    char ch;

    do {
        float num, i, power, division, sum = 0;

        printf("Enter the number: ");
        scanf("%f", &num);

        for (i = 1; i <= num; i++) {
            power = pow(num, i);        // num^i
            division = num / power;     // n / n^i

            printf("Term %d: %.4f\n", (int)i, division);

            sum += division;
        }

        printf("Sum of series = %.4f\n", sum);

        printf("Do you want to rerun your program? (y/n): ");
        ch = getche();     
        ch = tolower(ch);  
        printf("\n\n");

    } while (ch == 'y');

    getch();
}
