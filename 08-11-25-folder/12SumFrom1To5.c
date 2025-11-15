#include <stdio.h>
#include <ctype.h>
#include <conio.h>
 void main() {
   int num , i ,sum;
   char ch;
   do{
   printf("enter the number\n");
   scanf("%d",&num);
   for(i=1; i<=num; i++){
    sum += i;
   }
   printf("%d",sum);
    printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

      getch();
}