#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - Concatinates two strings
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * @n: unsigned int
 *
 * Return: Pointer to s1, n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1 = 0, len2 = 0;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

str = malloc(sizeof(char) * (len1 + n + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
str[i] = s1[i];

for (j = 0; j < n; j++)
str[i + j] = s2[j];

str[i + j] = '\0';

return (str);
}
