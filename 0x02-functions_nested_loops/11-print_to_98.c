#include "main.h"

void print_up_to_98(int n);
void print_down_to_98(int n);

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The number to or from 98
 *
 * Return: void
 */

void print_to_98(int n)
{

if (n > 98)
print_down_to_98(n);
else if (n < 98)
print_up_to_98(n);
else
{
_putchar('9');
_putchar('8');
_putchar('\n');
}

return;
}

/**
 * print_down_to_98 - prints all natural numbers from n down to 98
 * @n: upper bound number that decrease down to 98
 *
 * Return: void
 */

void print_down_to_98(int n)
{
int i;
for (i = n; i >= 98; i--)
{
if (i >= 100)
{
_putchar((i / 100) + '0');
_putchar(((i % 100) / 10) + '0');
}
else if (i >= 10)
{

_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

/**
 * print_up_to_98 - prints all natural numbers from n up to 98
 * @n: Lower bound number that increases up to 98
 *
 * Return: void
 */

void print_up_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
if (i < 0)
{
_putchar('-');
if (i <= -100)
{
_putchar(((i * -1) / 100) + '0');
_putchar((((i * -1) % 100) / 10) + '0');
}
else if (i >= 10 || i <= -10)
_putchar(((i * -1) / 10) + '0');
_putchar(((i * -1) % 10) + '0');
}
else
{
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}

if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
