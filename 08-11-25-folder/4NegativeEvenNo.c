#include <stdio.h>
#include <ctype.h>

#include <conio.h>
 void main() {
    char ch;
int i, num;
do{

printf("Enter any number \n");
scanf("%d", &num);
if(num<0){
    for(i=1 ; i>=num ; i--){
        if(i % 2==0 ){
            printf("even number is: %d",i);
        }
        printf("\n");
    }
}
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');


getch ();
 }