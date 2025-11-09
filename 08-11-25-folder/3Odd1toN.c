#include <stdio.h>
#include <conio.h>
 void main() {
    int num , i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=1 ; i<=num; i++){
        if(i % 2 != 0){
            printf(" Odd number is : %d", i);
            printf("\n");
        }
    }

   getch();
}