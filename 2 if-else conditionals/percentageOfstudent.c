#include <stdio.h>
#include <conio.h>
 void main() {
   int Hindi, Math, English, Sanskrit ,Science ,Total ,percentage;
   printf("Enter the obtain mark  in Hindi\n");
   scanf("%d", &Hindi);
   printf("Enter the obtain mark  in Math\n");
   scanf("%d",&Math);
   printf("Enter the obtain mark  in English \n");
   scanf("%d", &English);
   printf("Enter the obtain mark  in Sanskri\n ");
   scanf("%d", &Sanskrit);
   printf("Enter the obtain mark  in Science\n");
   scanf("%d", &Science);
   if(Hindi>30 || Math<30 || English<30 || Sanskrit<30 || Science<30){
   Total = Hindi+Math+English+Sanskrit+Science;
   percentage= (Total)/5;
   printf("Toal percentege %d \n", percentage);
   if(percentage>=75){
    printf("dectension mark\n");
   }
   else if (percentage>=60){
     printf("first division\n");
   }
   else if (percentage>=50){
     printf("second division\n");
   }
   else{
     printf("fail");
   }
}
else{
   printf("fail");
}
   


   getch();
}