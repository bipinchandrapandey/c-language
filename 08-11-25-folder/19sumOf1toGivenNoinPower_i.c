#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
void main()
{
    char ch ;
    do {
    int num, i, sumPowI=0, power;
    printf("Enter the number \n");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        power = pow(2, i);
        sumPowI += power;
        printf("%d power of %d = %d\n", 2, i, power);
    }
    printf(" sum of power is : %d", sumPowI);

     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

    getch();
}