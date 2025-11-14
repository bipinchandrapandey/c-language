#include <stdio.h>
#include <conio.h>
 void main() {
   int num,i,factorial = 1;
   printf("Enter the number \n");
    scanf("%d", &num);
    for(i=num;i>=1;i--){
        factorial *= i ; 
    }
    printf("factorial of %d is:  %d\n",num, factorial);

   getch();
}