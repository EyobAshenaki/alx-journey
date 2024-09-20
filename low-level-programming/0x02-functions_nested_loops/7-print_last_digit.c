#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number being computed on
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
int r;

if (n < 0)
r = -1 * (n % 10);
else
r = n % 10;

_putchar(r + '0');
return (r);
}
