#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to use for printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
