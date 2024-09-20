#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
char c, count = '9';

for (c = '0'; c <= count; c++)
{
_putchar(c);
}
_putchar('\n');
}
