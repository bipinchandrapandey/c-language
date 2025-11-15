#include <stdio.h>
#include<ctype.h>
#include <conio.h>
 void main() {
    char ch;
    int num , i;
    do{
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=1 ; i<=num; i++){
        if(i % 2 != 0){
            printf(" Odd number is : %d", i);
            printf("\n");
        }
    }
    printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');


   getch();
}