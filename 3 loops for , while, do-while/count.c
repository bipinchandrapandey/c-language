#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%d", i * j);
            if(j < 10) {   // avoid printing '|' after the last number
                printf("|");
            }
        }
        printf("\n"); // new line after each table
    }

    return 0;
}
