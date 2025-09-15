#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * errors - prints Error and exits with status 98
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 */
void multiply(char *num1, char *num2)
{
	size_t len1 = _strlen(num1);
	size_t len2 = _strlen(num2);
	size_t len = len1 + len2;
	size_t i, j, start = 0;
	int carry, n1, n2;
	int *result = calloc(len, sizeof(int));

	if (!result)
		errors();

	for (i = len1; i-- > 0;)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2; j-- > 0;)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}

	while (start < len && result[start] == 0)
		start++;

	if (start == len)
		_putchar('0');
	else
		for (; start < len; start++)
			_putchar(result[start] + '0');

	_putchar('\n');
	free(result);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		errors();

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
		errors();

	multiply(argv[1], argv[2]);
	return (0);
}
