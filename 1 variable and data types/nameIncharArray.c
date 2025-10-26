// #include <stdio.h>
// #include <conio.h>
//  void main() {
//    char name[30];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Your name is %s\n", name);
//    getch();
// }/
#include <stdio.h>
#include <conio.h>
 void main() {

   char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is %s\n", name);
   getch();
}