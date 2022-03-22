#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revert(char * s1);

void revert(char * s1) {
    int count = strlen(s1);
    char temp[count + 1];

    for (int i = 0; i < count; i++) {
        temp[i] = s1[i];
    }

    for (int i = 0; i < count; i++) {
        s1[i] = temp[count - i - 1];
    }
}

int main() {
    char text[] = "lorem ipsum";

    printf("tekst: %s\n", text);

    revert(text);
    
    printf("odwrocony tekst: %s\n", text);

    return 0;
}