#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void oddEv(int num);

 void main() {
    char ch;
    do{
    int num ;
    printf("enter the number: ");
    scanf ("%d", &num);
    oddEven(num);
     printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');


   getch();
}
void oddEv(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}