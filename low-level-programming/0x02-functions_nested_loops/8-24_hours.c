#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting form 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{

int min1, min2, sec1, sec2;

for (min1 = 0; min1 < 3; min1++)
{
for (min2 = 0; min2 < 10; min2++)
{
if (min1 == 2 && min2 == 4)
break;
for (sec1 = 0; sec1 < 6; sec1++)
{
for (sec2 = 0; sec2 < 10; sec2++)
{
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar(':');
_putchar(sec1 + '0');
_putchar(sec2 + '0');
_putchar('\n');
}
}
}
}
}
