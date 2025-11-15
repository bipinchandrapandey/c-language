#include <stdio.h>
#include <ctype.h>
#include <conio.h>
 void main() {
  char ch;
  int num, even,i;
  do{

   printf("Enter the number ");
   scanf("%d", &num);
    for(i=1; i<=num; i++){
    if(i%2==0){
        printf(" %d", i);
    }
   }
    printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');

   getch();
}