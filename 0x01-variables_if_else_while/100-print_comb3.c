#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when excution is done
 */

int main(void)
{
    int n = '0';

    while (n < '9')
    {
        int m = n + 1;

        while (m <= '9')
        {
            if (m != n)
            {
                putchar(n);
                putchar(m);
                if (n == '8' && m == '9')
                    break;
                // {
                putchar(',');
                putchar(' ');
                // }
            }
            m++;
        }
        n++;
    }

    putchar('\n');

    return (0);
}
