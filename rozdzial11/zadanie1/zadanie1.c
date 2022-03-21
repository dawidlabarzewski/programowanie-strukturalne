#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    char text[n];
    char c;

    printf("Wprowadz %d znakow\n", n);

    for (int i = 0; i < n; i++) {
        c = getch();

        printf("%c", c);

        text[i] = c;
    }

    printf("\nWprowadzone znaki:\n");

    printf("%s", text);

    return 0;
}