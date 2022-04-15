#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{

double fibonacci1 = 1, fibonacci2 = 2;
int count = 98, i = 0;

while (i < count)
{
int temp = 0;

printf("%llf\n --------\n", fibonacci1);

temp = fibonacci2;
fibonacci2 += fibonacci1;
fibonacci1 = temp;
i++;
}

return (0);
}
