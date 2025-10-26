#include <stdio.h>
#include <conio.h>
 void main() {
   int num;
   printf("enter any number");
   scanf("%d", &num);
   if (num%3==0 && num%5==0){
    printf("number is divisible by both");
   }
   else if (num%3==0){
    printf("num is only divisible by 3");
   }
   else if (num%5==0){
    printf("num is only divisible by 5");
   }
   else{
    printf("num is not divisible by both");
   }

   getch();
}