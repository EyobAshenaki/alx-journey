#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 on success
 */

int main(void)
{

    int i, count = 1024, sum;

    for (i = 0; i < count; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return (0);
}