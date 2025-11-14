#include <stdio.h>
#include <conio.h>
 void main() {
   int num, temnum, i, t,ag=0;
   printf("Enter the number\n ");
   scanf("%d",&num);
   temnum=num;
   while(num!=0){
    t= num%10;
    ag=ag+(t*t*t);
   num= num/10;
     }
  
   if(ag == temnum){
    printf("this is armestron");
   }
   else{
    printf("this is not armestron");
}
   

   getch();
}