#include <stdio.h>
#include <ctype.h>
#include <conio.h>
 void main() {
   char ch;
   do{
     int num,i,sum=0;
   printf("Enter the number \n");
   scanf("%d",&num);
   if(num>0){
   for(i=1 ;i<=num; i++){
    sum += i;
   }
   printf("%d",sum);
   }
    printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

   getch();
}