#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
int i, j, count = 14, counter = 10;

for (j = 0; j < counter; j++)
{
for (i = 0; i <= count; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
