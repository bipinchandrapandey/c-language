#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

float ci(float p, float r, int t);
int main()
{
    char ch ;
    do {
    float p, r;
    int t;
    float a;
    printf("enter the principal ammount\n");
    scanf("%f", &p);
    printf("enter the rate\n");
    scanf("%f", &r);
    printf("enter the time\n");
    scanf("%d", &t);
    a = ci(p, r, t);
    printf("%.2f", a);
    printf("\nDo you want to rerun your program? (y/n): ");
        ch = getche(); 
        ch = tolower(ch);
        printf("\n\n");

    } while(ch == 'y');

    return 0;
}
float ci(float p, float r, int t)
{
    float total;
    total = p * pow((1 + r / 100), t);
    return total;
}