#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times '_' should be printed
 *
 * Desciption: the line ends with '\n'
 *             If @n is 0 or less, it only print '\n'
 *
 * Return: void
 */

void print_line(int n)
{

int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
