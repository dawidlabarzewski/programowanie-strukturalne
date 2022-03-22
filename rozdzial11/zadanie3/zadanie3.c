#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int n = 5;

    char text[n];
    char c;

    printf("Wprowadz %d znakow\n", n);

    for (int i = 0; i < n; i++) {
        c = getch();

        if (c == '\t' || c == 13 || c == ' ') {
            break;
        }

        printf("%c", c);

        text[i] = c;
    }

    printf("\nWprowadzone znaki:\n");

    printf("%s", text);

    return 0;
}