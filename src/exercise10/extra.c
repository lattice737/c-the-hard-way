#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERROR: You need one argument\n");
        // this is how you abort a program
        return 1;
    }

    // TODO convert letters to lowercase arithmetically
    for (int j = 1; j < argc; j++) {
        for (int i = 0; argv[j][i] != '\0'; i++) {
            char letter = argv[j][i];

            if (letter == 'A') {
                printf("%d: 'a'\n", i);
            } else if (letter == 'a') {
                printf("%d: 'a'\n", i);
            } else if (letter == 'E') {
                printf("%d: 'e'\n", i);
            } else if (letter == 'e') {
                printf("%d: 'e'\n", i);
            } else if (letter == 'I') {
                printf("%d: 'i'\n", i);
            } else if (letter == 'i') {
                printf("%d: 'i'\n", i);
            } else if (letter == 'O') {
                printf("%d: 'o'\n", i);
            } else if (letter == 'o') {
                printf("%d: 'o'\n", i);
            } else if (letter == 'U') {
                printf("%d: 'u'\n", i);
            } else if (letter == 'u') {
                printf("%d: 'u'\n", i);
            } else if (letter == 'Y' && i > 2) {
                printf("%d: 'y'\n", i);
            } else if (letter == 'y' && i > 2) {
                printf("%d: 'y'\n", i);
            } else {
                printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

    return 0;
}