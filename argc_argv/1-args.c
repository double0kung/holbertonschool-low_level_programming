#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, prints the number of arguments passed to the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
