#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void) {
    char c = 'a';

    while (c <= 'z') {
        putchar(c);
        c++;
    }

    putchar('\n');
}


