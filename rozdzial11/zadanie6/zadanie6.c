#include <stdio.h>
#include <stdlib.h>

char * copy(char * s1, char * s2, int count);

char * copy(char * s1, char * s2, int count) {
    if (count < 1) {
        return s2;
    }

    int i;

    for (i = 0; i < count - 1 && s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }

    s1[i] = '\0';

    return s1;
}

int main() {
    char text[] = "lorem ipsum";
    char target[7];
    int count = 5;

    copy(target, text, count);

    printf("skopioway tekst: %s\n", target);

    return 0;
}