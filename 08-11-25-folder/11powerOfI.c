#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>
 void main() {
   int num , i ,power; 
   char ch;
   do{
   printf("enter the number \n");
   scanf("%d",&num);
   for(i=0;i<num;i++){
    power=pow(2,i);
    
    printf(" %d",power);
   }
    printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

   getch();
}