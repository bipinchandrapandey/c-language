#include <stdio.h>
#include <conio.h>

void main() {
    char whichRoad;
    int speed;

    printf("Enter road type (v = village, l = local, h = highway): ");
    whichRoad = getche();  
    printf("\nYou pressed: %c", whichRoad);

    printf("\nEnter your speed: ");
    scanf("%d", &speed); 
    if (whichRoad == 'v') {
        if (speed > 30) {
            printf("\nYou will get a chalan of 1000 Rs");
        } else {
            printf("\nNo chalan for you");
        }
    } 
    else if (whichRoad == 'l') {
        if (speed > 50) {
            printf("\nYou will get a chalan of 500 Rs");
        } else {
            printf("\nNo chalan for you");
        }
    } 
    else if (whichRoad == 'h') {
        if (speed > 120) {
            printf("\nYou will get a chalan of 1000 Rs");
        } else {
            printf("\nNo chalan for you");
        }
    } 
    else {
        printf("\nInvalid road type");
    }

    getch();
}

