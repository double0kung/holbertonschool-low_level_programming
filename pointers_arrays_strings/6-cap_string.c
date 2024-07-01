#include "main.h"
/**
* cap_string - Capitalizes all words of a string
* @str: The string to be modified
*
* Return: Pointer to the resulting string
*/
char *cap_string(char *str)
{
char *s = str;
int cap_next = 1;
char separators[] = " \t\n,;.!?\"(){}";
int i;

while (*s)
{
if (*s >= 'a' && *s <= 'z' && cap_next)
*s -= 32;
cap_next = 0;
for (i = 0; separators[i] != '\0'; i++)
{
if (*s == separators[i])
{
cap_next = 1;
break;
}
}
s++;
}
return (str);
}
