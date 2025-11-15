#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() {
    char ch;
    int num, i;
    do {

        

        printf("\n\nDo you want to Rerun your program? (y/n): ");
        ch = getche();  // read character
        ch = tolower(ch);
        printf("\n\n");
    } while(ch == 'y');

    return 0;
}