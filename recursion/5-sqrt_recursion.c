#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of.
 * Return: the natural square root, or -1 if no natural square root exists.
 */
int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper function to find the square root.
 * @n: the number to calculate the square root of.
 * @i: the current divisor.
 * Return: the natural square root, or -1 if no natural square root exists.
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}
