#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, j, k;

    // experimenting with for-loops
    for (i=1, j=2, k=3; i<6 && j<11 && k<16; i++, j+=2, k+=3) {
        printf("%d %d %d\n", i, j, k);
    }

    // go through each string in argv
    // why am I skipping argv[0]?
    for (i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California",
        "Oregon",
        "Washington",
        "Texas",
        NULL
    };

    int num_states = 5;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}