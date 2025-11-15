#include <stdio.h>
#include <conio.h>
#include <ctype.h>
 void main() {
  char ch;
  do{
   int num,i,factorial = 1;
   printf("Enter the number \n");
    scanf("%d", &num);
    for(i=num;i>=1;i--){
        factorial *= i ; 
    }
    printf("factorial of %d is:  %d\n",num, factorial);
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');

   getch();
}