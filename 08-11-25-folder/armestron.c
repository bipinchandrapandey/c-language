#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

void main() {
    char ch;

    do {
        int num, temp, digitCount = 0, rem;
        int sum = 0;

        printf("Enter the number: ");
        scanf("%d", &num);

        temp = num;

        // Count digits
        int t = num;
        while (t != 0) {
            digitCount++;
            t = t / 10;
        }

        // Armstrong calculation
        t = num;
        while (t != 0) {
            rem = t % 10;   
            sum = sum + pow(rem, digitCount); 
            t = t / 10;
        }

        if (sum == num) {
            printf("This is an Armstrong number\n");
        } else {
            printf("This is not an Armstrong number\n");
        }

        printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}
