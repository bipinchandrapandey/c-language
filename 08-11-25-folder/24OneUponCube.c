#include <stdio.h>
#include <conio.h>

void main() {
    float num, i, cube, x, sum=0;
    
    printf("Enter the number:\n");
    scanf("%f", &num);
    
    for(i = 1; i <= num; i++) {
        cube = i * i * i;
        x = 1.0 / cube;
        sum += x;   
        printf("1/%.0f^3 = %.4f\n", i, x);
    }
    printf("sum of given value is: %f", sum);

    getch();
}
