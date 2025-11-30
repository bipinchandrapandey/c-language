#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    char ch;

    do
    {
        printf("name\t: _______________________ \n");  
        printf("Enter marks for the following subjects:\n");
        printf("-----------------------------------------------------------------------------------\n");
        char sub[5][10] = {"Maths", "Science", "English", "Hindi", "Social"};
        int marks[5], i, total = 0, percentage = 0;

        for (i = 0; i < 5; i++)
        {
            printf("marks of \t\t %s: ", sub[i]);
            scanf("%d", &marks[i]);
        }

        for (i = 0; i < 5; i++)
        {
            total += marks[i];
        }

    
        if (marks[0] >= 33 && marks[1] >= 33 && marks[2] >= 33 && marks[3] >= 33 && marks[4] >= 33)
        {
            percentage = total / 5;
            printf("\n\tPass\n");
            printf("Total marks = %d\n", total);
            printf("Percentage = %d%%\n", percentage);
        }
        else
        {
            printf("\n\tFail\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n");

    } while (ch == 'y');

    getch();
}
