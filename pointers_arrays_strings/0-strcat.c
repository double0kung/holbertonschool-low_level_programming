#include "main.h"
/**
* _strcat - Concatenates two strings
* @dest: Destination string
* @src: Source string
*
* Return: Pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *d = dest;
while (*d)
d++;
while (*src)
*d++ = *src++;
*d = '\0';
return (dest);
}
