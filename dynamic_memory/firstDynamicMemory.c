// dynamic memory allocation in c 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    int *arr, n;

    printf("enter the limit ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {   
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("enter the elements ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("the elements are ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  

    getch();
}
