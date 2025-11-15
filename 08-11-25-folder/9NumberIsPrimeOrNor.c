#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    int num, i, count;
    char ch;

    do
    {
        printf("Enter any number: ");
        scanf("%d", &num);

        count = 0;  

        for (i = 1; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count > 1)
        {
            printf("This is a Composite Number");
        }
        else
        {
            printf("This is a Prime Number");
        }

        printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}
