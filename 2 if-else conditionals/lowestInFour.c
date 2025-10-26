#include <stdio.h>
#include <conio.h>
 void main() {
   int num1, num2, num3, num4;
   printf("Enter four numbers \n");
   scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
   if(num1<num2){
    if(num1<num3){
        if(num1<num4){
            printf("number 1 is lowest number %d", num1);
        }
        else{
            printf("number 4 is lowest number %d", num4);

        }
    }
    else{
        if(num3<num4){
            printf("number 3 is lowest number%d", num3);
        }
        else{
            printf("number 4 is lowest  number %d", num4);
        }
    }
    
}
  else if(num2<num1){
    if(num2<num3){
        if(num2<num4){
            printf("number 2 is lowest number %d", num2);
        }
        else{
            printf("number 4 is lowest number %d", num4);

        }
    }
    else {
        if(num3<num4){
            printf("number 3 is lowest number%d", num3);
        }
        else{
            printf("number 4 is lowest number %d", num4);
        }
    }
    
}
  else if(num3<num1){
    if(num3<num2){
        if(num3<num4){
            printf("number 3 is lowest number %d", num3);
        }
        else{
            printf("number 4 is lowest number %d", num4);

        }
    }
    else{
        if(num4<num2){
            printf("number 4 is lowest number%d", num4);
        }
        else{
            printf("number 2 is lowest number %d", num2);
        }
    }
    
}
else{
    printf("number 4 is lowest number %d", num4);
}
   

   
   getch();
}