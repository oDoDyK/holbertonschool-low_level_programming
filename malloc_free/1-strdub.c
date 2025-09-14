#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: char pointer
 *
 * Return: char pointer
 */
char *_strdup(char *str)
{
unsigned int counter1, counter2;
char *strCopy;

counter1 = 0;
counter2 = 0;

if (str == NULL)
{
return (0);
}

while (str[counter1] != '\0')
{
counter1++;
}
strCopy = malloc(sizeof(char) * (counter1 + 1));
if (strCopy == NULL)
{
return (NULL);
}
while (counter2 < counter1)
{
strCopy[counter2] = str[counter2];
counter2++;
}
strCopy[counter2] = '\0';

return (strCopy);
}
