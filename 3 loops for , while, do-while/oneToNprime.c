#include <stdio.h>
#include <conio.h>
 void main() {
   int num , i, count =0, j;
    printf("Enter a number to check prime or composite: ");
    scanf("%d", &num);
    for(j=1; j<=num; j++){ 
    count=0;
     for(i=2; i<=j/2; i++){
    if(j%i==0){
        count++;
        break;
    }
   }
   if(count==0 && j!=1){
    printf("prime number %d\n", j);
   
}
    }

   getch();
}