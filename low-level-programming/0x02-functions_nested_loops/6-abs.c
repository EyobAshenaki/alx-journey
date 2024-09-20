#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number being computed upon
 *
 * Return: Absolute value of n
 */

int _abs(int n)
{

if (n < 0)
n -= 2 * n;

return (n);
}
