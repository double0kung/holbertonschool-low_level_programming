#include <stdlib.h>
#include "main.h"

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
