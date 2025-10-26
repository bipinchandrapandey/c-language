#include <stdio.h>
#include <conio.h>
 void main() {
   int num =5;
   int i,j;
   for(i=num; i>1; i--){
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
   }
   for(i=1; i<=num; i++){
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
   }
   getch();
}