#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: The integer value of the string, or 0 if no valid number is found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int digit;

	/* Skip non-digit characters and process signs */
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		i++;
	}

	/* Convert digits to integer with overflow check */
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (result > (2147483647 - digit) / 10)
		{
			if (sign == 1)
				return (2147483647);
			return (-2147483648);
		}
		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}
