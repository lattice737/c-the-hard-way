#include <stdio.h>

int main(int argc, char *argv[]) {
    int numbers[4] = { 0 };
    char name[5] = { 'a' };

    // first, print them raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // setup the name
    name[0] = 'V';
    name[1] = 'i';
    name[2] = 'r';
    name[3] = 'i';
    name[4] = '\0';

    // print them out, initialized
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);

    // print name as a string
    printf("name: %s\n", name);

    // another way to use name
    char *another = "Viri";

    printf("another: %s\n", another);
    printf("another each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);

    // assign chars to numbers
    numbers[0] = 'V';
    numbers[1] = 'i';
    numbers[2] = 'r';
    numbers[3] = 'i';

    for (int i = 0; i < 4; i++) {
        // error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
        // warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        // note: treat the string as an argument to avoid this
        // printf(numbers[i]);

        printf("%c\n", numbers[i]);
    }

    // assign ints to name
    name[0] = 1;
    name[1] = 2;
    name[2] = 3;
    name[3] = 4;
    name[4] = 5;

    for (int i = 0; i < 5; i++) {
        // error: incompatible integer to pointer conversion passing 'char' to parameter of type 'const char *'; take the address with & [-Wint-conversion]
        // warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        // note: treat the string as an argument to avoid this
        // printf(name[i]);

        printf("%d\n", name[i]);
    }

    return 0;
}