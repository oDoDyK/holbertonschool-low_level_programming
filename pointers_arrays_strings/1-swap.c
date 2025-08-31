#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
