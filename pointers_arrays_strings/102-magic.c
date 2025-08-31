#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Sets a[2] to 98 using pointer arithmetic
 * Author: Student
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5];
    int *p;

    p = a;

    /* Add code below this line */
    *(p + 2) = 98;

    printf("a[2] = %d\n", a[2]);
    return (0);
}
