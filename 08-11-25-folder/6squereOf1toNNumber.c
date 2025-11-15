#include <stdio.h>
#include <ctype.h>
#include <conio.h>
 void main() {
   int i, square, num;
   char ch;
   do{
   printf("enter the number\n");
   scanf("%d",&num);
   for(i=1; i<=num; i++){
    square=i*i;
    printf("square of %d is : %d\n", i, square);

   }
   printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');
   getch();
}