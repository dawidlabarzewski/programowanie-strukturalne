#include <stdio.h>
#include <stdlib.h>

void do_binar(int n, int format);

void do_binar(int n, int format) {
    if (format < 2 || format > 10) {
        printf("Podano nieprawidlowy system liczbowy\n");

        return;
    }

    int r;

    r = n % format;
    if (n >= format)
        do_binar(n / format, format);
    putchar('0' + r);
}

int main() {
    int liczba;
    int format;
    printf("Podaj liczbe calkowita (q konczy program):\n");

    while (scanf("%d", &liczba) == 1)
    {
        printf("Podaj system liczbowy:\n");
        scanf("%d", &format);

        printf("Odpowiednik w systemie %d-kowym: ", format);
        do_binar(liczba, format);
        putchar('\n');
        printf("Podaj liczbe calkowita (q konczy program):\n");
    }

    return 0;
}