#include <stdio.h>
#include <conio.h>
 void main() {
   int num , i, count ;
   printf("Enter the number \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++){
    if(num %i ==0){
        count++;
     }
    }
    if(count>2){
        printf("composite number");
    }
    else{
        printf("prime number");
    }


   getch();
}