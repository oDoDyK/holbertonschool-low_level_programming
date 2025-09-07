#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: address of memory to print
 * @size: size of memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for _memset
 *
 * Return: Always 0
 */
int main(void)
{
    char buffer[98] = {0x00};

    /* Print buffer before _memset */
    simple_print_buffer(buffer, 98);

    /* Fill first 95 bytes with 0x01 */
    _memset(buffer, 0x01, 95);

    printf("-------------------------------------------------\n");

    /* Print buffer after _memset */
    simple_print_buffer(buffer, 98);

    return (0);
}
