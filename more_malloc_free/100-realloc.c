#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL if it fails
 *
 * Description: If new_size > old_size, the "added" memory is not initialized
 * If new_size == old_size, returns ptr without changes
 * If ptr is NULL, equivalent to malloc(new_size)
 * If new_size is 0 and ptr is not NULL, equivalent to free(ptr), returns NULL
 * Don't forget to free ptr when it makes sense
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *old_char_ptr, *new_char_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_char_ptr = (char *)ptr;
new_char_ptr = (char *)new_ptr;

for (i = 0; i < old_size && i < new_size; i++)
new_char_ptr[i] = old_char_ptr[i];

free(ptr);
return (new_ptr);
}
