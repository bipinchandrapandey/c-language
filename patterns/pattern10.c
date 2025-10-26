#include <stdio.h>
#include <conio.h>
 void main() {
   int num = 5;
    int i,j;
    for(i=num;i>=1;i--){
        for(j=i;j<=num;j++) {
            printf(" *");
        }
        printf("\n");
    }
   getch();
}