#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char ch;
    do{
    float num, i, square, x, sum=0;
    
    printf("Enter the number:\n");
    scanf("%f", &num);
    
    for(i = 1; i <= num; i++) {
        square = i * i;
        x = 1.0 / square;
        sum += x;   
        printf("1/%.0f^2 = %.4f\n", i, x);
    }
    printf("sum of given value is: %f", sum);
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}
