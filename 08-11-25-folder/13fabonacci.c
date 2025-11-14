#include <stdio.h>
#include <conio.h>
 void main() {
   int i, num, t1=0,t2=1, fabo;
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

   getch();
}