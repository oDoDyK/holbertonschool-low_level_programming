```c
#include <stdio.h>

/**
 * main - Computes the sum of multiples of 3 or 5 below 1024
 *
 * Description: This program calculates the sum of all natural numbers
 * below 1024 (excluded) that are multiples of 3 or 5, then prints
 * the result followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0;
    int i;

    for (i = 1; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return (0);
}
