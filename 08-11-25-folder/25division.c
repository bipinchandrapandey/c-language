#include <stdio.h>
#include <math.h>
#include <conio.h>

 void main() {
   float num , i ,power, division, sum =0 ;
   printf("enter the number\n");
   scanf("%f",&num);
   for(i=1;i<=num; i++){
    power= pow(num,i);
    division=num/power;
    sum += division ;
    }
    printf("Sum of series = %.4f", sum);

   getch();
}