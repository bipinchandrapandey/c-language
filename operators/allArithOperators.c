#include <stdio.h>
#include <conio.h>
 void main() {
   int a,b,c,d,e,add,sub,multi,divis;
   printf("Enter the number\n");
   scanf("%d%d%d%d%d", &a, &b, &c, &d,&e);
   add= a+b;
   printf("addition of a - b is : %d\n",add);
   sub = b-a;
   printf("substraction of b-a is : %d\n",sub);
   multi = c*d;
   printf("multiplication of c * d is : %d\n",multi);
   divis = e/a;
   printf("division of e / a is : %d\n",divis);
  
   
   getch();
}