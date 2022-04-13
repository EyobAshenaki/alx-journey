#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when excution is done
 */

int main(void)
{
int n = 0;

while (n < 99)
{
int m = 0;

while (m <= 99)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
putchar(' ');
putchar((m / 10) + '0');
putchar((m % 10) + '0');

if (n == 98 && m == 99)
continue;

putchar(',');
putchar(' ');

m++;
}
n++;
}

putchar('\n');

return (0);
}
