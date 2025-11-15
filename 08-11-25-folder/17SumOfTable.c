#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main() {
    int num, i, sumofTable;
    char ch;

    do {
        printf("Enter the number \n");
        scanf("%d", &num);

        sumofTable = 0;   // reset only this, no need to reset num

        for (i = 1; i <= 10; i++) {
            sumofTable += num * i;
        }

        printf("%d\n", sumofTable);

        printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}
