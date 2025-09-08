#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to a char
 * @to: pointer to a char to assign
 *
 * Description: This function makes *s point to the same location as 'to'.
 */
void set_string(char **s, char *to)
{
*s = to;
}
