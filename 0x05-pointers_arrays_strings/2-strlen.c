#include <stdio.h>
#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
int a = 0;
for (; *s++;)
a++;
return (a);
}
