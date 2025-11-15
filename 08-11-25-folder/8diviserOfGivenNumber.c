#include <stdio.h>
#include <ctype.h>
#include <conio.h>
 void main() {
   int num, i, totaldiviser;
   char ch;
   do{
   printf("Enter the number\n");
   scanf("%d",&num);
   printf(" the diviser of is:\n");
   for(i=1; i<=(num/2); i++){
    if(num%i==0){
      printf("%d ",  i);
        printf("\n");
        totaldiviser++;
      }
}
printf(" %d \n",num);
printf("\n Total diviser is: %d", totaldiviser+1);

printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');
  
      getch();
}