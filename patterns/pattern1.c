#include <stdio.h>
#include <conio.h>

 void main() {
    int n=70;
    int i,j;
    for(i=65;i<=70;i++) {
        for(j=65;j<=i;j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
    getch();
 }
 
//  void main() {
//    char a = 'A';
//    printf("%d",a);
//    getch();
// }
// void main() {
//    int a = 65;
//    printf("%c \n", a);
//    getch();
// }
