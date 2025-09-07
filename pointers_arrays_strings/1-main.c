#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: address of memory to print
 * @size: size of memory to print
 *
 * Return: Nothing
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
 * main - check the code for _memcpy
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	/* Print buffer before _memcpy */
	simple_print_buffer(buffer, 98);

	/* Copy 10 bytes from buffer2 to buffer starting at position 50 */
	_memcpy(buffer + 50, buffer2, 10);

	printf("-------------------------------------------------\n");

	/* Print buffer after _memcpy */
	simple_print_buffer(buffer, 98);

	return (0);
}
