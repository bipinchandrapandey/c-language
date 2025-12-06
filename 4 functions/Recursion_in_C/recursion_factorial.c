#include <stdio.h>
#include <conio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
 void main() {
    int num, result;
   printf("factoria by recursion method \n");
   printf("Enter the number ");
   scanf("%d",&num);
   result = fact(num);
   printf("the factoria is %d\n\n",result);
   main();


   getch();
}