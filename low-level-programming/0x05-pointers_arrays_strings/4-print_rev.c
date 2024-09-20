#include "main.h"

/**
 * print_rev - prints a string, in reverse, followes by a new line
 * @s: pointer to a string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{

int len = 0;

while (s[len] != '\0')
len++;

while (len)
_putchar(s[--len]);

_putchar('\n');
}
