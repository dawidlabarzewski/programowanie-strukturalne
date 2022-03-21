#include <stdio.h>
#include <stdlib.h>

void rzad_zn(char ch, int i, int j);

void rzad_zn(char ch, int i, int j) {
    for (int k = 0; k < j; k++) {
        for (int l = 0; l < i; l++) {
            putchar(ch);
        }

        printf("\n");
    }
}

int main() {
    char ch;
    int i;
    int j;

    printf("Podaj znak\n");
    scanf("%c", &ch);

    printf("W ilu kolumnach ma sie wyswietlac znak?\n");
    scanf("%d", &i);
    
    printf("W ilu wierszach ma sie wyswietlac znak?\n");
    scanf("%d", &j);

    rzad_zn(ch, i, j);

    return 0;
}