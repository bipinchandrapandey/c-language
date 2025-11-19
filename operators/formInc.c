#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    char ch;

    do
    {
        char grade;
        

        int name , rollNo ,obtainedMarks, totalMarks, hindi, english, maths, science, socialStudies;
        float percentage;
        printf("-------------------------------------------------------------------------------------------\n");

        printf("Enter your name- Bipin Chandra Pandey  \t\t \t  Roll number - ITM/25/MCA/05 ");
        

        printf("\n-------------------------------------------------------------------------------------------\n");
        printf("sub \t\t max \t\t obtain\n");
        printf("-------------------------------------------------------------------------------------------\n");
       
        printf("Hindi:  \t 100 \t\t ");
        scanf("%d", &hindi);
        printf("English: \t 100  \t\t ");
        scanf("%d", &english);
        printf("Math:  \t\t 100  \t\t ");
        scanf("%d", &maths);
        printf("Science: \t 100  \t\t ");
        scanf("%d", &science);
        printf("socialStudies: \t 100 \t\t ");
        scanf("%d", &socialStudies);
        printf("-------------------------------------------------------------------------------------------\n");

        obtainedMarks = hindi + english + maths + science + socialStudies;
        totalMarks = 500;
        percentage = (obtainedMarks / (float)totalMarks) * 100;
        printf("Total Marks: \t 500 \t\t %d\n", obtainedMarks);
        printf("percentage: \t\t %.2f%%\n", percentage);
        printf("-------------------------------------------------------------------------------------------\n");
        if (percentage >= 75)
        {
            grade = 'A';
        }
        else if (percentage >=60 )
        {
            grade = 'B';
        }
        else if (percentage >= 50)
        {
            grade = 'C';
        }
        else if (percentage >= 35)
        {
            grade = 'D';
        }
      else{
            grade = 'F';
        }
        printf("Grade: \t\t\t %c\n", grade);
        printf("-------------------------------------------------------------------------------------------\n");

        printf("\n\nDo you want to rerun your program? (y/n): ");
        ch = getche();
        ch = tolower(ch);
        printf("\n\n");
    } while (ch == 'y');

    return 0;
    }