#include <stdio.h>
#include <stdlib.h>

int zawiera(char text[], char ch);

int zawiera(char text[], char ch) {
    while(*text != '\0')
    {
        if (*text == ch) {
            return 1;
        }

        *text++;
    }

    return 0;
}

int main() {
    char *text = "lorem ipsum";
    char c = 'u';
    char d = 'f';

    int is = zawiera(text, c);
    int is2 = zawiera(text, d);

    if (is) {
        printf("tekst %s zawiera litere %c\n", text, c);
    }
    else {
        printf("tekst %s nie zawiera litery %c\n", text, c);
    }

    if (is2) {
        printf("tekst %s zawiera litere %c\n", text, d);
    }
    else {
        printf("tekst %s nie zawiera litery %c\n", text, d);
    }
    

    return 0;
}