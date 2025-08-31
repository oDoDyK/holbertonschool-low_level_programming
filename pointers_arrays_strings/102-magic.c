#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[5] = {0, 1, 98, 3, 4};
    int *p;

    p = a;

    printf("a[2] = %d\n", *(p + 2));

    return (0);
}
