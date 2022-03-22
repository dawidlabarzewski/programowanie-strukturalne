#include <stdio.h>
#include <stdlib.h>

char * findChar(char text[], char ch);

char * findChar(char text[], char ch) {
    while(*text != '\0')
    {
        if (*text == ch) {
            return text;
        }

        *text++;
    }

    return 0;
}

int main() {
    char *text = "lorem ipsum";
    char c = 'u';

    char * wsk = findChar(text, c);

    printf("Wskaznik: %p", wsk);

    return 0;
}