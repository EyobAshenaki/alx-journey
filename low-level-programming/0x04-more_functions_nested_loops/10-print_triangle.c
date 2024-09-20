#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Description: the character '#' is used to print the triangle
 *              If size is 0 or less, it print only a new line
 *
 * Return: void
 */

void print_triangle(int size)
{

int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= (size - i))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
