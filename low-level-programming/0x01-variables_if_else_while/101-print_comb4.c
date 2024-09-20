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

        while (m < '9')
        {
            int o = m + 1;

            if (m != n)
            {
                while (o <= '9')
                {
                    if (m != o)
                    {
                        putchar(n);
                        putchar(m);
                        putchar(o);

                        if (n == '7' && m == '8' && o == '9')
                            break;

                        putchar(',');
                        putchar(' ');
                    }
                    o++;
                }
            }
            m++;
        }
        n++;
    }

    putchar('\n');

    return (0);
}
