#include <stdio.h>
#include <stdlib.h>

double potega(double number, int power);

double potega(double number, int power){
    if (number == 0) {
        return 0;
    }

    if (power == 0) {
        return 1;
    }

    if (power < 0) {
        number = 1 / number;
        power = -power;
    }

    double result = number;

    for (int i = 1; i < power; i++) {
        result = result * number;
    }

    return result;
}

int main() {
    double x;
    int y;

    printf("Podaj dwie liczby\n");

    scanf("%lf %d", &x, &y);

    double result = potega(x, y);
    
    printf("%lf do potegi %d to %lf", x, y, result);

    return 0;
}