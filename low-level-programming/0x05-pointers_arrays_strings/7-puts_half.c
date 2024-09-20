#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{

int len = 0;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
len /= 2;
else
len = (len + 1) / 2;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
