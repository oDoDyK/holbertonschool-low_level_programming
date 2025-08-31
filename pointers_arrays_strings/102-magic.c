#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to demonstrate pointer arithmetic
 *              Sets a[2] to 98 using a pointer
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5];
    int *p;

    p = a;

    /* Set a[2] to 98 without using variable a */
    
    *(p + 2) = 98;

    printf("a[2] = %d\n", a[2]);
    
    return (0);
}
