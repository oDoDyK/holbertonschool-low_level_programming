#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv; /* unused variable */
printf("%d\n", argc - 1);
return (0);
}
