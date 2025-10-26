#include <stdio.h>
#include <conio.h>
#include <ctype.h>
 void main() {
   char word;
   printf("enter any charecter\n");
   word = getche();
   
   printf("\n");

   word = tolower(word);
 

   switch (word)
   {
   case 'a': 
   case 'e': 
   case 'i': 
   case 'o': 
   case 'u':
     printf(" this is vowel\n");
        break;
   
   default: printf(" this is consonant\n");
        break;
   }
   getch();
}