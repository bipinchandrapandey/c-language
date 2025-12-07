#include <stdio.h>
#include <conio.h>

int table(int n, int i) {
    if (i <= 10) {
        printf("%d ", n * i);
        table(n, i + 1);   // recursive call
    }
}

int main() {
    int num;
    
    printf("\nEnter a number to print its table:\n");
    scanf("%d", &num);

    table(num, 1);  
   main();

    
    return 0;
}
