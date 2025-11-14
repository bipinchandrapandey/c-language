#include <stdio.h>
#include <conio.h>
 void main() {
   int num,i,sumSquare;
   printf("Enter the number \n");
   scanf("%d",&num);
   if(num>0){
   for(i=1 ;i<=num; i++){
 sumSquare += i*i;
  
}
printf("%d",sumSquare);
}
   getch();
}