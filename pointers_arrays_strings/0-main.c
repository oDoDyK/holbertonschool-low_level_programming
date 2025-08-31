#include "main.h"
#include <stdio.h>

/**
 * main - test the _strcat function
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	/* Print original strings */
	printf("%s", s1);
	printf("%s", s2);

	/* Concatenate s2 to s1 */
	ptr = _strcat(s1, s2);

	/* Print after concatenation */
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);

	return (0);
}
