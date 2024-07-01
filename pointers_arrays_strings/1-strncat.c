#include "main.h"
/**
* _strncat - Concatenates two strings, using at most n bytes from src
* @dest: Destination string
* @src: Source string
* @n: Number of bytes to use from src
*
* Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *d = dest;
while (*d)
d++;
while (n-- > 0 && *src)
*d++ = *src++;
*d = '\0';
return (dest);
}
