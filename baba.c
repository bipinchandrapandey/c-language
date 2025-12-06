#include <stdio.h>

void display(int n) {
    if(n == 15)
        return;  // base condition

    printf("%d ", n);
    display(n - 1); 
}

int main() {
    display(25);
    return 0;
}
