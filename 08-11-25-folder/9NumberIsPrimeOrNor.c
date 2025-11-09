#include <stdio.h>
#include <conio.h>

void main() {
    int num, i, count = 0;

    printf("enter any number\n");
    scanf("%d", &num);

    for (i = 1; i <= (num / 2); i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count > 1) {
        printf("This is composite Number");
    } else {
        printf("This is Prime Number");
    }

    getch();
}
