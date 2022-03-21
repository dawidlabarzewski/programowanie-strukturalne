#include <stdio.h>
#include <stdlib.h>

double harmonic_mean(double x, double y);

double harmonic_mean(double x, double y) {
    return 2 / (double)(1/(double)x + 1/(double)y);
}

int main() {
    double x, y;

    printf("Podaj dwie liczby\n");

    scanf("%lf %lf", &x, &y);

    double result = harmonic_mean(x, y);

    printf("Srednia harmoniczna liczb %f i %f to %f", x, y, result);

    return 0;
}