#include <stdio.h>
#include <conio.h>
#include <math.h>

float ci(float p, float r, int t);
int main()
{
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
    printf("%f", a);

    return 0;
}
float ci(float p, float r, int t)
{
    float total;
    total = p * pow((1 + r / 100), t);
    return total;
}