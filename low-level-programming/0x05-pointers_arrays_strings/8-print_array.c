#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to an array to be printed
 * @n: number of elements of array @a to be printed
 *
 * Description: Numbers must be separated by comma,
 * followed by a space.
 * The numbers should be displayed in the same order as
 * they are stored in the array.
 *
 * Return void
 */

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%d", a[i]);
else
printf("%d, ", a[i]);
}
printf("\n");
}
