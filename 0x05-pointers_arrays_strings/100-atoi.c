#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to be converted
 *
 * Description:
 * - The number in the string can be preceded by an infinite number of
 *   characters
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

int n = 0, i = 0, has_int = 0, sign_neg = 0, sign_pos = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign_neg++;
else if (s[i] == '+')
sign_pos++;

if (s[i] >= '0' && s[i] <= '9')
{
has_int = 1;

n = (n * 10) + (s[i] - 48);

if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
break;
}
i++;
}

if (sign_neg > sign_pos)
n *= -1;

if (!has_int)
return (0);

return (n);
}
