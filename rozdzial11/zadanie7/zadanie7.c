#include <stdio.h>
#include <stdlib.h>

char * zawiera_lan(char * s1, char * s2);

char * zawiera_lan(char * s1, char * s2) {
    while(*s1 != '\0') {
        char *ptr = s2;
        char *curPtr = s2;
        char *curs1 = s1;

        while(*curPtr == *curs1 || *curPtr == '\0') {
            if (*curPtr == '\0') {
                return ptr;
            }

            *curPtr++;
            *curs1++;
        }

        *s1++;
    }

    return 0;
}

int main() {
    char text[] = "lorem ipsum";
    char word[] = "re";

    char * wsk = zawiera_lan(text, word);

    printf("wskaznik szukanego fragmentu: %p\n", wsk);

    return 0;
}