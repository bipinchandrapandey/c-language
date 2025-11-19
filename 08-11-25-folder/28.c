#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() {
    char ch;

    do {
    int num, i;
        

        printf("\n\nDo you want to rerun your program? (y/n): ");
        ch = getche();  // read character
        ch = tolower(ch);
        printf("\n\n");
    } while(ch == 'y');

    return 0;
}