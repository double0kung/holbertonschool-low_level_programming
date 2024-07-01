#include "main.h"
/**
* string_toupper - Changes all lowercase letters of a string to uppercase
* @str: The string to be modified
*
* Return: Pointer to the resulting string
*/
char *string_toupper(char *str)
{
char *s = str;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (str);
}
