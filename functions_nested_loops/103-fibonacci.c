#include <stdio.h>

/**
 * main - Entry point, sums even Fibonacci numbers not exceeding 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;
	unsigned long sum = 2;

	while (b <= 4000000)
	{
		next = a + b;
		if (next > 4000000)
		{
			break;
		}
		if (next % 2 == 0)
		{
			sum += next;
		}
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
