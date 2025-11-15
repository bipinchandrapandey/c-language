#include <stdio.h>
#include <conio.h>
#include <ctype.h>
 void main() {
   int i, num, t1=0,t2=1, fabo;
   char ch;
   do{
   printf("Enter the number of fibonnaci\n");
   scanf("%d",&num);
   printf("%d\n",t1);
   printf("%d\n",t2);
   
   for(i=1; i<=num; i++){
    fabo= t1+t2;
     printf("%d\n", fabo);
     t1=t2;
     t2=fabo;
    }
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');


   getch();
}