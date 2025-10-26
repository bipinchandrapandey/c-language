#include <stdio.h>
#include <conio.h>
 int main() {
    int a, b, c ;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
if(a>b){
    if (a>c){
        printf(" greatest number is a %d",a);
    }
    
    else{
         printf("c is greatest %d",c);
        }
}
else{
    if(b>a){
            if(b>c){
            printf("greatest number is b %d",b);
            }
        else{
        printf("greatest number is c %d",c);
         }
}
}
return 0 ;
}