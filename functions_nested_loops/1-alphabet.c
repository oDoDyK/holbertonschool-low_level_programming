#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
        _putchar(c++);
    _putchar('\n');
}
