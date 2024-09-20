#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
int fibonacci1 = 1, fibonacci2 = 2, sum = 0, count = 4000000;

while (fibonacci1 < count)
{
int temp = 0;
if (fibonacci1 % 2 == 0)
sum += fibonacci1;
temp = fibonacci2;
fibonacci2 += fibonacci1;
fibonacci1 = temp;
}
printf("%d\n", sum);
return (0);
}
