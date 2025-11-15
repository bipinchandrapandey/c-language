#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char ch;
    do{
    int num, i; 
    float fact = 1, sumOfseries = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact *= i;
        printf("1/%d! = %.4f\n", i, 1.0/fact);
        sumOfseries += 1.0 / fact;
    }

    printf("\nSum of the series = %.4f", sumOfseries);
      printf("Do you want to rerun your program? (y/n): ");
        ch = getche();     
        ch = tolower(ch);  
        printf("\n\n");

    } while (ch == 'y');


    getch();
}


