#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i])
		{
			i++;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
