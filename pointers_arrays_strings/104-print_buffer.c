#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer in hexadecimal and ASCII
 * @b: buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j] & 0xff);
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] >= 32 && b[i + j] <= 126)
				_putchar(b[i + j]);
			else
				_putchar('.');
		}
		_putchar('\n');
	}
}
