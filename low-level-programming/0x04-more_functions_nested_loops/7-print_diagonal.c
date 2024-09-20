#include "main.h"

/**
 * print_diagonal - draws diagonal line in the terminal
 * @n: the number of times '\' will be printed
 *
 * Desciption: the diagonals ends with '\n'
 *             If @n is 0 or less, it only print '\n'
 *
 * Return: void
 */

void print_diagonal(int n)
{

int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < i; j++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
}
}
