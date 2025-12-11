#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    FILE *Fp = NULL;
  Fp = fopen("D:\\newfile\\student.txt", "w");



    if (Fp == NULL) {
        printf("File not created");
    } else {
        printf("Enter any character: ");
        ch = getch();     

        fputc(ch, Fp);    
        fclose(Fp);

        printf("\nFile created and character written successfully!");
    }

    getch();
    return 0;
}
