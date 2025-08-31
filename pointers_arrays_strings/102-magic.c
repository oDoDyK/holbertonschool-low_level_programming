#include <stdio.h>

/**
 * main - example for modifying pointer arithmetic
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a;

	*(p + 2) = 98; /* Add this line as instructed */
	printf("a[2] = %d\n", a[2]);

	return (0);
}
