#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
void main()
{
    char ch;
    do{
    int num, i, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("this is perfact number");
    }
    else
    {
        printf("this is not perfact number");
    }
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}