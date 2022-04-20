#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: a pointer to a string to be concatenated upon
 * @src: a pointer to a string to be concatenated
 *
 * Return: a pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{

char *temp = dest;

while (*dest)
dest++;

for (; *src != '\0'; src++)
{
*dest++ = *src;
}
*dest = '\0';

return (temp);
}
