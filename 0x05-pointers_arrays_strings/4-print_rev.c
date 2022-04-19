#include "main.h"

/**
 * print_rev - prints a string, in reverse, followes by a new line
 * @s: pointer to a string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{

    int counter = 0, i;

    for (; *s != '\0'; s++)
    {
        counter++;
    }

    for (i = 0; i <= counter; i++)
    {
        _putchar(*(s - i));
    }
    _putchar('\n');

    return;
}
