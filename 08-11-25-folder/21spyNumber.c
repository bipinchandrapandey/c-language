#include <stdio.h>
#include <conio.h>
#include <ctype.h>
 void main() {
  char ch;
  do{
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
 printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");

    } while (ch == 'y');
   getch();
}