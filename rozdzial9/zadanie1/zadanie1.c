#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);

double min(double x, double y) {
    return x < y ? x : y;
}

int main() {
    double x;
    double y;

    printf("Podaj pierwsza liczbe\n");
    scanf("%lf", &x);

    printf("Podaj druga liczbe\n");
    scanf("%lf", &y);

    double lower = min(x, y);

    printf("Mniejsza liczba to: %lf\n", lower);

    return 0;
}