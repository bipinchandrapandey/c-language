#include <stdio.h>
#include <conio.h>
 void main() {
   int  days;
   printf("enter the 1 to 7 any number for days");
   scanf("%d", &days);
   if(days>0 && days<=7){
    switch (days)
    {
    case 1:   printf("sunday");

        
        break;
    
    case 2: printf("Monday ");

        
        break;
    
    case 3: printf("Tuesday");
        
        break;
    case 4: printf("wednesday");
        
        break;
    case 5: printf("thurseday");
        
        break;
    case 6: printf("Friday");
        
        break;
    
    default: printf("saturday");
        break; 
    }
    
}
else {
    printf("Enter valid number for days");
}
   getch();
}