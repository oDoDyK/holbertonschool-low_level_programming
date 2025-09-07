#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: characters to match
 *
 * Return: number of bytes in initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
				break;
			a++;
		}

		if (*a == '\0')
			return (count);

		count++;
		s++;
	}

	return (count);
}
