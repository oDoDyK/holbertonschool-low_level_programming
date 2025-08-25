#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the value of the multiplication table
 *
 * Description: If n is greater than 15 or less than 0, the function
 * does nothing. Numbers are separated by commas and spaces and
 * properly aligned.
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (j != 0)
			{
				if (prod < 10)
					printf("   %d", prod);
				else if (prod < 100)
					printf("  %d", prod);
				else
					printf(" %d", prod);
			}
			else
			{
				printf("%d", prod);
			}

			if (j != n)
				printf(",");
		}
		printf("\n");
	}
}
