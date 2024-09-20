#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when excution is done
 */

int main(void)
{
char c = '0';

while (c <= '9')
{
putchar(c);
c++;
}

c = 'a';

while (c <= 'f')
{
putchar(c);
c++;
}

putchar('\n');

return (0);
}
