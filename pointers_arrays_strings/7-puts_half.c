#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
    int len = 0, start;

    while (str[len])
        len++;

    start = (len + 1) / 2;

    while (str[start])
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}
