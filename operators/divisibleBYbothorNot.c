#include <stdio.h>
#include <conio.h>
 void main() {
   int num;
   printf("enter the number\n ");

   scanf("%d",&num);
   if(num%3==0 && num%5==0){
    printf("this is divisible by both 3 and 5");
   }
   else if(num%3==0){
    printf("this is only divisible by 3 ");
   }
   else if (num%5==0){
    printf("this is only divisible by 5");
   }
   else{
    printf(" this is not divisible by both");
   }

   getch();
}