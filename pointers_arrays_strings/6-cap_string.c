#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	char sep[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				break;
			}
		}
	}

	return (str);
}
