#include <stdio.h>
#include <conio.h>
#include <math.h>
 void main() {
   int num , i ,power; 
   printf("enter the number \n");
   scanf("%d",&num);
   for(i=0;i<num;i++){
    power=pow(2,i);
    
    printf(" %d",power);
   }

   getch();
}