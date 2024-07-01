#include "main.h"
/**
* _strncpy - Copies a string
* @dest: Destination buffer
* @src: Source string
* @n: Number of bytes to copy
*
* Return: Pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *d = dest;
while (n-- > 0 && *src)
*d++ = *src++;
while (n-- > 0)
*d++ = '\0';
return (dest);
}
