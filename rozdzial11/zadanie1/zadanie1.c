#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    char text[n];

    printf("Wprowadz %d znakow\n", n);

    for (int i = 0; i < n; i++) {
        text[i] = getchar();
    }

    printf("Wprowadzone znaki:\n");

    printf("%s", text);

    return 0;
}