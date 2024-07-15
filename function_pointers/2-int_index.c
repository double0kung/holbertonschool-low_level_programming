#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparison function
 * Return: index of the first element for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
