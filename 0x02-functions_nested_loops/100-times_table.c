#include "main.h"

/**
 * print_times_table - prints the n times table, starting from 0
 * @n: Times table number or limit
 *
 * Description: If n is greater than 15 or less than 0
 * the function will not print anything
 *
 * Return: void
 */

void print_times_table(int n)
{
int row, col, prod;

if (n > 15 || n < 0)
return;

for (col = 0; col <= n; col++)
{
for (row = 0; row <= n; row++)
{
prod = row * col;

_putchar(' ');
if (prod >= 10)
{
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod % 100) / 10) + '0');
}
else
{
_putchar(' ');
_putchar((prod / 10) + '0');
}
}
else if (prod < 10 && row != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar((prod % 10) + '0');
if (row != n)
{
_putchar(',');
}
}
_putchar('\n');
}
}
