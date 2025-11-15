#include <stdio.h>
#include <conio.h>
#include <ctype.h>
 void main() {
  char ch;
  do{
   int num,i,sumSquare=0;
   printf("Enter the number \n");
   scanf("%d",&num);
   if(num>0){
   for(i=1 ;i<=num; i++){
 sumSquare += i*i;
  
}
printf("%d",sumSquare);
}
 printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');
   getch();
}