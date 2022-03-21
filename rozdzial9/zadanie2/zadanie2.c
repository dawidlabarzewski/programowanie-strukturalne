#include <stdio.h>
#include <stdlib.h>

void rzad_zn(char ch, int i, int j);

void rzad_zn(char ch, int i, int j) {
    for (int k = 0; k < i; k++) {
        putchar(' ');
    }

    for (int k = i; k <= j; k++) {
        putchar(ch);
    }
}

int main() {
    char ch;
    int i;
    int j;

    printf("Podaj znak\n");
    scanf("%c", &ch);

    printf("Podaj kolumne od ktorej ma sie wyswietlac\n");
    scanf("%d", &i);
    
    printf("Podaj kolumne do ktorej ma sie wyswietlac\n");
    scanf("%d", &j);

    rzad_zn(ch, i, j);

    return 0;
}