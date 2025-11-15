#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main() {
    char ch;

    do {
        int num, temnum, t, ag = 0;

        printf("Enter the number: ");
        scanf("%d", &num);

        temnum = num;  

        while (num != 0) {
            t = num % 10;       
            ag = ag + (t * t * t);  
            num = num / 10;      
        }

        if (ag == temnum) {
            printf("This is an Armstrong number\n");
        } else {
            printf("This is not an Armstrong number\n");
        }
        printf("\n\n");

        printf("Do you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}
