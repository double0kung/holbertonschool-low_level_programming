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
while (*s)
{
if (*s >= 'a' && *s <= 'z' && cap_next)
*s -= 32;
cap_next = (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' || *s == ';' || *s == '.' || *s == '!' || *s == '?' || *s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}');
s++;
}
return (str);
}
