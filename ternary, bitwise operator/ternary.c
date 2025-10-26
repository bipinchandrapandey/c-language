#include <stdio.h>
#include <conio.h>
 void main() {
   int a,b,c;
   printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b) && (a>c))? printf("%d the largest number",a):((b>c)? printf("%d the largest number",b):printf("%d the largest number",c));

   getch();
}