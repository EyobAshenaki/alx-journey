#include "main.h"

/**
 * print_most_numbers - prints numbers, from 1-9
 * Description: prints the numbers from, 1-9 followed by
 * a new line and wont print 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
char c, count = '9';

for (c = '0'; c <= count; c++)
{
if (c != '2' && c != '4')
_putchar(c);
}
_putchar('\n');
}
