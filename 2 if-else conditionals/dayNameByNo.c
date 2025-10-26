#include <stdio.h>
#include <conio.h>
 void main() {
   int days;
   printf("Enter the number of days (1-7):\n ");
   scanf("%d", &days);
   if (days>7|| days<0){
    printf("invalid days number ");
   }
   else if (days==1){
    printf("sunday");
}
   else if (days==2){
    printf("Monday");
}
   else if (days==3){
    printf("Tuesday");
}
   else if (days==4){
    printf("Wednesday");
}
   else if (days==5){
    printf("Thursday");
}
   else if (days==6){
    printf("Friday");
}
    else if (days==7){
     printf("Saturday");
    }

   getch();
}