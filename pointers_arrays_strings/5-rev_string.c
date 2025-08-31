#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
    int i = 0, j;
    char temp;

    while (s[i])
        i++;
    j = i - 1;

    i = 0;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
