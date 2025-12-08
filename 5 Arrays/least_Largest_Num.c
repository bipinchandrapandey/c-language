#include <stdio.h>
#include <conio.h>

void main() {
    int numbers[10], least, largest;

    printf("Enter any ten numbers:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    least = largest = numbers[0];

    for(int i = 1; i < 10; i++) {
        if(numbers[i] < least) {
            least = numbers[i];
        }
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("\nSmallest number = %d", least);
    printf("\nLargest number = %d", largest);

    getch();
}
