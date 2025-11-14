#include <stdio.h>
#include <conio.h>
 void main() {
   int num , i ,s,sumofdigit=0,multiplyofdigit=1;
     printf("Enter the number \n");
    scanf("%d", &num);

   while(num !=0){
     s = num%10;
     sumofdigit += s;
     multiplyofdigit *=s;
    num= num/10;
}
if(sumofdigit==multiplyofdigit){
    printf("this is spy number");
}
else{
    printf("this is not spy number");
}
   getch();
}