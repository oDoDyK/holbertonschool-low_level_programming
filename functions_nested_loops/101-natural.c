#include "main.h"

/**
 * natural_sum - Computes and prints the sum of all multiples of 3 or 5 below 1024
 */
void natural_sum(void)
{
    int sum = 0, i;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("%d\n", sum);
}
