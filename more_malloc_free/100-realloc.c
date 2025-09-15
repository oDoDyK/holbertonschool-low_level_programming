#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size of the old memory block in bytes
 * @new_size: size of the new memory block in bytes
 *
 * Return: pointer to new memory block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_ptr = ptr;

for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return (new_ptr);
}
