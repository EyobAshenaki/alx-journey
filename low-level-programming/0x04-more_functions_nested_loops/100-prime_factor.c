#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{

long int comp_num = 612852475143;
int i = 2, j, is_prime = '1', largest_prime;

while (comp_num > 1)
{
if (comp_num % i == 0)
{
for (j = 2; j < i; j++)
{
if (i % j == 0)
{
is_prime = '0';
break;
}
}
if (is_prime == '0')
i++;
else
{
comp_num /= i;
largest_prime = i;
}
}
else
{
i++;
}
}
printf("%d\n", largest_prime);

return (0);
}
