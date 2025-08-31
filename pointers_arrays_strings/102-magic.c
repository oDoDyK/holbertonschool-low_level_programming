#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[5];

    a[0] = 0;
    a[1] = 1;
    a[2] = 98;
    a[3] = 3;
    a[4] = 4;

    /* Print a[2] = 98 without using a comma or modifying p */
    printf("a[2] = %d\n", a[2]);

    return (0);
}
