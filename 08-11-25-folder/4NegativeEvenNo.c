#include <stdio.h>
#include <conio.h>
 void main() {
int i, num;
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
getch ();
 }