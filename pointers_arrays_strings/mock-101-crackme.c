#include <stdio.h>
#include <string.h>

/**
 * main - mock program to test 101-keygen
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 on success, 1 if invalid
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    if (argc != 2)
    {
        printf("Usage: %s <password>\n", argv[0]);
        return (1);
    }

    /* Calculate sum of ASCII values */
    for (i = 0; argv[1][i]; i++)
        sum += argv[1][i];

    /* Check if sum equals 2772 (same as real 101-crackme) */
    if (sum == 2772)
        printf("Tada! Congrats\n");
    else
        printf("Wrong password\n");

    return (0);
}
