#include <stdio.h>
#include <conio.h>

void main() {
    int num, result1, result2;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    result1 = num%1000/ 100 + num%100/10;
    result2 = num%10000/1000 + num%10;

     printf(" result1 %d", result1);
     printf(" result2 %d", result2);

    getch();
}
