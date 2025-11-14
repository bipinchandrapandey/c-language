#include <stdio.h>
#include <conio.h>
 void main() {
   int num , i ,sum;
   printf("enter the number\n");
   scanf("%d",&num);
   for(i=1; i<=num; i++){
    sum += i;
   }
   printf("%d",sum);
      getch();
}