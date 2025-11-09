#include <stdio.h>
#include <conio.h>
 void main() {
     int i, num, Rtable;
     printf("enter the number\n");
     scanf("%d", &num);
  for(i=10; i>=1 ; i--){
        Rtable = i*num;
       printf(" %d X %d = %d ",i, num, Rtable);
       printf("\n");
    }
  getch();
}