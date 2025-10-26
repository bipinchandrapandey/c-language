#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2, num3, num4, num5;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                if (num1 > num5) {
                    printf("%d is the highest number", num1);
                } else {
                    printf("%d is the highest number", num5);
                }
            } else {
                if (num4 > num5) {
                    printf("%d is the highest number", num4);
                } else {
                    printf("%d is the highest number", num5);
                }
            }
        } else {
            if (num3 > num4) {
                if (num3 > num5) {
                    printf("%d is the highest number", num3);
                } else {
                    printf("%d is the highest number", num5);
                }
            } else {
                if (num4 > num5) {
                    printf("%d is the highest number", num4);
                } else {
                    printf("%d is the highest number", num5);
                }
            }
        }
    } 
    else {  
        if (num2 > num3) {
            if (num2 > num4) {
                if (num2 > num5) {
                    printf("%d is the highest number", num2);
                } else {
                    printf("%d is the highest number", num5);
                }
            } else {
                if (num4 > num5) {
                    printf("%d is the highest number", num4);
                } else {
                    printf("%d is the highest number", num5);
                }
            }
        } else {
            if (num3 > num4) {
                if (num3 > num5) {
                    printf("%d is the highest number", num3);
                } else {
                    printf("%d is the highest number", num5);
                }
            } else {
                if (num4 > num5) {
                    printf("%d is the highest number", num4);
                } else {
                    printf("%d is the highest number", num5);
                }
            }
        }
    }

    getch();
}
