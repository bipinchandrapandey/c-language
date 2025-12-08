#include <stdio.h>
#include <conio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

void main() {
    struct student s1, s2;

  // 1 st Student
    printf("\nEnter details of Student 1:\n");
    printf("Enter student id: ");
    scanf("%d", &s1.id);

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter student marks: ");
    scanf("%f", &s1.marks);


    // 2nd  Student 
    printf("\nEnter details of Student 2:\n");
    printf("Enter student id: ");
    scanf("%d", &s2.id);

    printf("Enter student name: ");
    scanf("%s", s2.name);

    printf("Enter student marks: ");
    scanf("%f", &s2.marks);


    // Printing details
    printf("\n\n--- Student Details ---\n");

    printf("\nStudent 1 ID: %d", s1.id);
    printf("\nStudent 1 Name: %s", s1.name);
    printf("\nStudent 1 Marks: %.2f", s1.marks);

    printf("\n\nStudent 2 ID: %d", s2.id);
    printf("\nStudent 2 Name: %s", s2.name);
    printf("\nStudent 2 Marks: %.2f", s2.marks);

    getch();
}
