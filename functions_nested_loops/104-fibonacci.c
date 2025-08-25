#include <stdio.h>

/**
 * main - Entry point, prints first 98 Fibonacci numbers starting with 1, 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a_low = 1;
	unsigned long b_low = 2;
	unsigned long a_high = 0;
	unsigned long b_high = 0;
	unsigned long next_low;
	unsigned long next_high;
	unsigned long carry;
	int i;

	printf("%lu, %lu", a_low, b_low);
	for (i = 3; i <= 98; i++)
	{
		carry = (a_low + b_low) / 1000000000;
		next_low = (a_low + b_low) % 1000000000;
		next_high = a_high + b_high + carry;

		if (next_high == 0)
		{
			printf(", %lu", next_low);
		}
		else
		{
			printf(", %lu%09lu", next_high, next_low);
		}

		a_low = b_low;
		a_high = b_high;
		b_low = next_low;
		b_high = next_high;
	}
	printf("\n");
	return (0);
}
