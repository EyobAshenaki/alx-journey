#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to be converted
 *
 * Description:
 * - The number in the string can be preceded by an infinite number of
 *   characters.
 * - You need to take into account all the - and + signs before the number
 * - If there are no numbers in the string, the function must return 0
 * - You are not allowed to use long
 * - You are not allowed to declare new variables of “type” array
 * - You are not allowed to hard-code special values
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{

unsigned int n = 0;
int i = 0, has_int = 0, sign = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
has_int = 1;

n = (n * 10) + (s[i] - 48);

if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
break;
}
i++;
}

if (sign < 0)
n = -n;

if (!has_int)
return (0);

return (n);
}
