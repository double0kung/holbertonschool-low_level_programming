#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated space in memory, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (i = 0; i < n; i++)
concat[len1 + i] = s2[i];
concat[len1 + n] = '\0';

return (concat);
}
