#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle: \n");
    scanf("%f %f %f", &a, &b, &c);
    
    
    if ((a + b) > c && (b + c) > a && (c + a) > b) {
        s = (a + b + c) / 2;  // semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula
        printf("Area of the triangle: %.2f\n", area);
    } 
    else {
        printf("Triangle is not possible\n");
    }
    
    return 0;
    
}
