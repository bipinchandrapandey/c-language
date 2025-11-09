#include <stdio.h>
#include <conio.h>
 void main() {
    int num , i;
    
for (num=1; num<=10; num++){
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    printf("\n");
}
   
   getch();
}