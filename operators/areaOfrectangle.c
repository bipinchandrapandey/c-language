#include <stdio.h>
#include <conio.h>
 void main() {
   int width,height,area,parameter;
   printf("enter the value of width\n");
   scanf("%d", &width );
   printf("enter the value of height\n");
   scanf("%d", &height);
   area = (height*width);
   parameter = 2*(width+height);
   printf("The area of rectengle is : %d\n", area);
   printf("The parameter of rectengle is : %d", parameter);



   getch();
}