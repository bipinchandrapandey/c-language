#include <stdio.h>
#include <conio.h>

void main() {
    int Hindi, Math, English, Sanskrit, Science, Total, percentage;

    printf("Enter the obtained marks in Hindi: ");
    scanf("%d", &Hindi);

    printf("Enter the obtained marks in Math: ");
    scanf("%d", &Math);

    printf("Enter the obtained marks in English: ");
    scanf("%d", &English);

    printf("Enter the obtained marks in Sanskrit: ");
    scanf("%d", &Sanskrit);

    printf("Enter the obtained marks in Science: ");
    scanf("%d", &Science);

    // Check if any subject is less than 30 (Fail condition)
    if (Hindi < 30 || Math < 30 || English < 30 || Sanskrit < 30 || Science < 30) {
        printf("Fail (Because you scored less than 30 in one or more subjects)\n");
    } 
    else {
        Total = Hindi + Math + English + Sanskrit + Science;
        percentage = Total / 5;

        printf("Total percentage = %d\n", percentage);

        if (percentage >= 75) {
            printf("Distinction\n");
        }
        else if (percentage >= 60) {
            printf("First Division\n");
        }
        else if (percentage >= 50) {
            printf("Second Division\n");
        }
        else {
            printf("Pass\n");
        }
    }

    getch();
}
