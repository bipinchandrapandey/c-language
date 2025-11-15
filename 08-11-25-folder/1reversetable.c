#include <stdio.h>
#include <conio.h>
#include <ctype.h>   // for tolower()

void main() {
    int i, num, Rtable;
    char ch;

    do {
        printf("Enter the number:\n");
        scanf("%d", &num);

        for(i = 10; i >= 1; i--) {
            Rtable = i * num;
            printf("%d X %d = %d\n", i, num, Rtable);
        }

        printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');

    getch();
}
