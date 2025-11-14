#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
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

    getch();
}