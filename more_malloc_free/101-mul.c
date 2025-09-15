#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - Prints "Error" and exits with status 98
 * @ptr: Pointer to free before exiting (can be NULL)
 */
void print_error(char *ptr)
{
	if (ptr)
		free(ptr);
	printf("Error\n");
	exit(98);
}

/**
 * is_valid_number - Checks if a string contains only digits
 * @str: String to check
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(char *str)
{
	int i;

	if (!str || str[0] == '\0')
		return (0);

	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);

	return (1);
}

/**
 * trim_leading_zeros - Allocates a new string without leading zeros
 * @str: Input string
 * Return: Newly allocated string, or NULL if malloc fails
 */
char *trim_leading_zeros(char *str)
{
	int i = 0;
	char *result;

	while (str[i] == '0' && str[i + 1] != '\0')
		i++;

	result = malloc(strlen(str + i) + 1);
	if (!result)
		return (NULL);

	strcpy(result, str + i);
	return (result);
}

/**
 * multiply_numbers - Multiplies two positive numbers as strings
 * @num1: First number string
 * @num2: Second number string
 * Return: Dynamically allocated result string, or NULL on malloc fail
 */
char *multiply_numbers(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int result_len = len1 + len2;
	char *result = malloc(result_len + 1);
	int i, j, n1, n2, carry, sum;
	char *final_result;

	if (!result)
		return (NULL);

	for (i = 0; i < result_len; i++)
		result[i] = '0';
	result[result_len] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (result[i + j + 1] - '0') + n1 * n2 + carry;
			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i + j + 1] += carry;
	}

	final_result = trim_leading_zeros(result);
	free(result);

	return (final_result);
}

/**
 * main - Entry point, multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result = NULL;

	if (argc != 3)
		print_error(NULL);

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
		print_error(NULL);

	result = multiply_numbers(argv[1], argv[2]);
	if (!result)
		print_error(NULL);

	printf("%s\n", result);
	free(result);

	return (0);
}
