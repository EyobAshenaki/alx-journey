#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a char array(string)
 *
 * Return: the length of the string @s
 */

int _strlen(char *s)
{

int counter = 0;

for (; *s != '\0'; s++)
{
counter++;
}
return (counter);
}
