#include <stdio.h>
#include <conio.h>
 void main() {
   int a , b, sqrOfAandB;
   printf("enter the A and B number :\n ");
   scanf("%d%d",&a,&b);
   sqrOfAandB = (a*a)+ (b*b)+(2*a*b);    // squre of a and b = a2 + b2 + 2ab
   printf("square of a and b = %d", sqrOfAandB);

   getch();
}