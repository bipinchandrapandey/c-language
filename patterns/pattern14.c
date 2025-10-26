#include <stdio.h>
#include <conio.h>
 void main() {
   int num=5;
   int i,j;
   for(i=num; i>=1; i--){
    for(j=i; j<=num;j++){
        printf("%d",j);
        
    }
    printf("\n");

   }
   for(i=1; i<=num; i++){
    for(j=i+1; j<=num;j++){
        printf("%d",j);
        
    }
    printf("\n");

   }
   getch();
}