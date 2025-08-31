#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
        }
        i++;
    }
    return (result * sign);
}
