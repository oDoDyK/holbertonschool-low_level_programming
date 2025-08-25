#include <stdio.h>

/**
 * main - Entry point, prints first 50 Fibonacci numbers starting with 1, 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 50; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
