#include <stdio.h>
#include <string.h>

int main() {
    
    
    printf("ASCII Table (1 to 127):\n");
    int i = 1;
    while( i <= 127) {
        printf("%d: %c\n", i, i);
        i++;
    }

    return 0;
}