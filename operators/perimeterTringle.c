#include <stdio.h>
#include <conio.h>
 void main() {
   float base , height, side1, side2,side3,area,perimeter;
    printf("enter the value of base\n");
    scanf("%f", &base );
    printf("enter the value of height\n");
    scanf("%f", &height);
    printf("enter the value of side1\n");
    scanf("%f", &side1);
    printf("enter the value of side2\n");
    scanf("%f", &side2);
    printf("enter the value of side3\n");
    scanf("%f", &side3);
    area = 0.5*base*height;
    perimeter = side1+side2+side3;
    printf("The area of triangle is : %.2f\n", area);
    printf("The perimeter of triangle is : %.2f", perimeter);   
    
   getch();
}