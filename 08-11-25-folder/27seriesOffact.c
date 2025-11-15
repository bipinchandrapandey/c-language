#include <stdio.h>
#include <conio.h>
#include <ctype.h>   // for tolower()

int main() {
    char ch;
    int num, i; 
   
    do { 
        float fact = 1, sumOfseries = 0;  // reset inside loop

        printf("Enter the number: ");
        scanf("%d", &num);

        for(i = 1; i <= num; i++) {
            fact *= i;
            printf("%d/%d! = %.4f\n", num, i, num/fact);
            sumOfseries += num / fact;
        }

        printf("\nSum of the series = %.4f\n", sumOfseries);

        printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();  // read character
        ch = tolower(ch);

        printf("\n\n");

    } while(ch == 'y');
    

    getch();
    return 0;
}
