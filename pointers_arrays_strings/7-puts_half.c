#include "main.h"
/**
* puts_half - Prints half of a string followed by a new line
* @str: The string to be processed
*/
void puts_half(char *str)
{
int len = 0, n;
while (str[len] != '\0')
len++;
n = (len - 1) / 2;
if (len % 2 == 0)
n++;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
