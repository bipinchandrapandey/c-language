// write a program to accept initial valocity, aceleration and time to find out the velocity and total distance covere.

#include <stdio.h>
#include <conio.h>
 void main() {
    float u, a, t, v, s;
    printf("Enter initial velocity (u), acceleration (a) and time (t): ");
    scanf("%f %f %f", &u, &a, &t);
    v = u + a * t;
    s = u * t + 0.5 * a * t * t;
    printf("Final velocity (v) = %.2f\n", v);
    printf("Total distance covered (s) = %.2f\n", s);

   
   getch();
}
