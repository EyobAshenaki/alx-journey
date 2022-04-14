#include "main.h"

/**
 * times_table - prints the 9 times table, starting from 0
 *
 * Return: void
 */

void times_table(void)
{

int row, col, prod;

for (col = 0; col < 10; col++)
{
for (row = 0; row < 10; row++)
{
prod = row * col;

if (prod >= 10)
_putchar((prod / 10) + '0');
else if (prod < 10 && row != 0)
_putchar(' ');
_putchar((prod % 10) + '0');

if (row != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
