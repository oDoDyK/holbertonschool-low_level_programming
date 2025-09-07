#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c in s, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* check if the character is the null terminator */
	if (c == '\0')
		return (s);

	return (NULL);
}
