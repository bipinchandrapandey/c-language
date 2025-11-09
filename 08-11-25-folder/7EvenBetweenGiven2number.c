#include <stdio.h>
#include <conio.h>
 void main() {
   int num1, num2, i ;
   printf("enter First number\n");
   scanf("%d",&num1);
   printf("enter second number\n");
   scanf("%d",&num2);
   if(num1<num2){
    for(i=num1; i<=num2; i++){
        if(i%2==0){
            printf("the Even number is %d",i);
        }
        printf("\n");
    }
}
else if (num1>num2){
    for(i=num1; i>=num2; i--){
        if(i%2==0){
            printf("the Even number is %d",i);
        }
        printf("\n");      
    }
   }
   

   getch();
}