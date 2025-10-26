#include<stdio.h>
# include <conio.h>
void main(){
    int num =121;
    int rev = 0, rem, temp;
    temp = num; 
    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if(temp == rev){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    getch();
}