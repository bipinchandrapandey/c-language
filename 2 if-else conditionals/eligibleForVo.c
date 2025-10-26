#include <stdio.h>
#include <conio.h>
 void main() {

    int age;
    printf("Enter your Age\n");
    scanf("%d", &age);
    if(age<0 || age>120){
        printf("Invalid age ");
    }
    else if (age>=18){
        printf("your are eligible for vote");
    }
    else{
        printf("you are not eligible for vote");
    }

   
   getch();
}