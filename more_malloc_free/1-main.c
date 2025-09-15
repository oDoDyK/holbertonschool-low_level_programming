#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* prototype */
char *string_nconcat(char *s1, char *s2, unsigned int n);

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}