#include <stdio.h>
#include <stdlib.h>

int findChar(char text[], char ch);

int findChar(char text[], char ch) {
    while(*text != '\0')
    {
        if (*text == ch) {
            return *text;
        }

        *text++;
    }

    return 0;
}

int main() {
    char *text = "lorem ipsum";
    char c = 'u';

    int wsk = findChar(text, c);

    printf("Wskaznik: %d", wsk);

    return 0;
}