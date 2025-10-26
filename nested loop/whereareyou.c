#include <stdio.h>
#include <conio.h>
 void main() {
   char direction, dfr ;
   int totalRotation;
   printf("Enter the starting dirction\n");
   direction = getche();
   direction=tolower(direction);
   printf("\n Enter the side of rotation left or right\n");
   dfr = getche();
   dfr=tolower(dfr);
   printf("\n Enter the totalrotation\n");
   scanf("%d", &totalRotation);



   if(direction=='n'){
    if(dfr=='l'){
        if(totalRotation %4==0 ){
            printf(" your face is north direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is west direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is south direction");
        }
        else {
            printf(" your face is east direction");
        }
    }
    else if (dfr=='r'){
         if(totalRotation %4==0 ){
            printf(" your face is north direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is  east direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is south direction");
        }
        else {
            printf(" your face is west direction");
        }
    }
  }
   if(direction=='e'){
    if(dfr=='l'){
        if(totalRotation %4==0 ){
            printf(" your face is east direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is north direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is west direction");
        }
        else {
            printf(" your face is south direction");
        }
    }
    else if (dfr=='r'){
         if(totalRotation %4==0 ){
            printf(" your face is east direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is south direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is west direction");
        }
        else {
            printf(" your face is north direction");
        }
    }
  }
   if(direction=='s'){
    if(dfr=='l'){
        if(totalRotation %4==0 ){
            printf(" your face is south direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is east direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is north direction");
        }
        else {
            printf(" your face is west direction");
        }
    }
    else if (dfr=='r'){
         if(totalRotation %4==0 ){
            printf(" your face is south direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is west direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is north direction");
        }
        else {
            printf(" your face is east direction");
        }
    }
  }
   if(direction=='w'){
    if(dfr=='l'){
        if(totalRotation %4==0 ){
            printf(" your face is west direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is south direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is east direction");
        }
        else {
            printf(" your face is north direction");
        }
    }
    else if (dfr=='r'){
         if(totalRotation %4==0 ){
            printf(" your face is west direction");
        }
        else if(totalRotation %4==1 ){
            printf(" your face is north direction");
        }
        else if(totalRotation %4==2){
            printf(" your face is east direction");
        }
        else {
            printf(" your face is south direction");
        }
    }
  }





   getch();
}