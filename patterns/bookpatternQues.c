#include <stdio.h>
#include <conio.h>
 void main() {
   int num = 6 , i,j,k;
   for(i=1; i<=num; i++){
    for(j=1;j<=i;j++){
        for(k=1;k<=num-i+1;k++){
            printf(" ");
        }
        printf("* ");
    }

     

printf("\n");
}
   getch();
}