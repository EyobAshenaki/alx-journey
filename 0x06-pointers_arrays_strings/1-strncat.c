#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: a pointer to a string to be concatenated upon
 * @src: a pointer to a string to be concatenated
 * @n: number of bytes to be concatenated
 *
 * Return: a pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

    char *temp = dest;

    while (*dest)
        dest++;

    while (n > 0 && *src)
    {
        *dest++ = *src++;
        n--;
    }

    return (temp);
}