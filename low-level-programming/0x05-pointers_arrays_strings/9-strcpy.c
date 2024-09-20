#include "main.h"

/**
 * _strcpy - copies one string into another
 * @src: pointer of a string to be copied
 * @dest: pointer of a string @src will be copied to
 *
 * Description: copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{

int len = 0, i = 0;

while (src[len] != '\0')
len++;

while (i <= len)
{
dest[i] = src[i];
i++;
}

return (dest);
}
