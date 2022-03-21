#include <stdio.h>
#include <stdlib.h>

int get_alphabet_number(char ch);

int get_alphabet_number(char ch) {
    int e = ch;

    if (e < 65 || (e > 90 && e < 97) || e > 122) {
        return -1;
    }

    int minus = e >= 97 ? 96 : 64;

    return e - minus;
}

int main() {
    char sentence[100];

    gets(sentence);

    char * t;

    for (t = sentence; *t != '\0'; t++) {
        int index = get_alphabet_number(*t);

        printf("litera %c to %d z kolei w alfabecie\n", *t, index);
    }

    return 0;
}