// write a program to accept km , convert into mm, cm, decimeter decameter and heptometer.
#include <stdio.h>
#include <conio.h>
int main() {
    double km;
    double mm, cm, dm, dam, hm;

    // Accept input in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%lf", &km);

    // Conversions
    mm  = km * 1000000;   // 1 km = 1,000,000 mm
    cm  = km * 100000;    // 1 km = 100,000 cm
    dm  = km * 10000;     // 1 km = 10,000 dm
    dam = km * 100;       // 1 km = 100 dam
    hm  = km * 10;        // 1 km = 10 hm

    // Output
    printf("\n%.2lf km = %.2lf mm", km, mm);
    printf("\n%.2lf km = %.2lf cm", km, cm);
    printf("\n%.2lf km = %.2lf dm", km, dm);
    printf("\n%.2lf km = %.2lf dam", km, dam);
    printf("\n%.2lf km = %.2lf hm\n", km, hm);

    return 0;
}

