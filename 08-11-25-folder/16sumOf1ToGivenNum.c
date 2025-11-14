#include <stdio.h>
#include <conio.h>
 void main() {
   int num,i,sum;
   printf("Enter the number \n");
   scanf("%d",&num);
   if(num>0){
   for(i=1 ;i<=num; i++){
    sum += i;
   }
   printf("%d",sum);
   }
   else if(num<=0){
   for(i=num ;i<=0; i++){
    sum += i;
   }
   printf("%d",sum);
   }
  
   getch();
}