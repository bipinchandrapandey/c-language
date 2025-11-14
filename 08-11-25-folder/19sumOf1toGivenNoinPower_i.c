#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
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

    getch();
}