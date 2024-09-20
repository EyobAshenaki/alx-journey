#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when excution is done
 */

int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}

putchar('\n');

return (0);
}
