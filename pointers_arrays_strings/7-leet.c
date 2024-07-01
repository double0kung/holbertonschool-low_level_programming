#include "main.h"
/**
* leet - Encodes a string into 1337
* @str: The string to be encoded
*
* Return: Pointer to the resulting string
*/
char *leet(char *str)
{
char *s = str;
char leet_map[256] = {0};
leet_map['a'] = leet_map['A'] = '4';
leet_map['e'] = leet_map['E'] = '3';
leet_map['o'] = leet_map['O'] = '0';
leet_map['t'] = leet_map['T'] = '7';
leet_map['l'] = leet_map['L'] = '1';
while (*s)
{
if (leet_map[*s])
*s = leet_map[*s];
s++;
}
return (str);
}
