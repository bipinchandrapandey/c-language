#include <stdio.h>
#include <ctype.h>
#include <conio.h>
 void main() {
   int num , i, count ;
   char ch;
   do {
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
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');



   getch();
}