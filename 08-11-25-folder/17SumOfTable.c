#include <stdio.h>
#include <conio.h>
 void main() {
   int num,i,sumofTable;
   printf("Enter the number \n");
   scanf("%d",&num);

   for(i=1 ;i<=10; i++){
    sumofTable += num*i;
  
}
printf("%d",sumofTable);

   getch();
}