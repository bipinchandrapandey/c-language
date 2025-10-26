#include <stdio.h>
#include <conio.h>
 void main() {
   int num = 5;
    int i,j;
    for(i=1;i<=num;i++){
        for(j=i;j<=num;j++) {
            printf(" *");
        }
        printf("\n");
    }
   getch();
}