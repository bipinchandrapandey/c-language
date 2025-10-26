//write a program to accept perpendicular and base of a rightangle triangle and calculate hypotenious and area of triangle?
#include<stdio.h>
#include<math.h>
int main(){
    int base , hight, hypotenuse, area;
    printf("enter the value of base ");
    scanf("%d",&base);
    printf("enter the value of hight ");
    scanf("%d",&hight);
    hypotenuse = sqrt((base*base)+hight*hight);
    area = (base*hight)/2;
    printf("the value of hypotenuse is %d\n",hypotenuse);
    printf("the value of area is %d",area);
   return 0;
}