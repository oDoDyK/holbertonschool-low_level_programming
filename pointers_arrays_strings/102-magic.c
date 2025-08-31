#include <stdio.h>

void magic(void)
{
    int a[5];  /* Array to work with */
    int *p;     /* Pointer to manipulate the array */

    a[2] = 0;   /* Initialize a[2] to some value */
    p = a;      /* p points to the start of array a */

    /* Line 19: Add the required statement here */
    *(p + 2) = 98; /* Set a[2] to 98 using pointer arithmetic */
    ;

    /* Existing print statement to output the result */
    printf("a[2] = %d\n", a[2]);
}

int main(void)
{
    magic();
    return (0);
}
