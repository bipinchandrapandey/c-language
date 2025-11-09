#include <stdio.h>
#include <conio.h>
 void main() {
   int i, square, num;
   printf("enter the number\n");
   scanf("%d",&num);
   for(i=1; i<=num; i++){
    square=i*i;
    printf("square of %d is : %d\n", i, square);

   }
   getch();
}