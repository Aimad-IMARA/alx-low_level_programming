#include <stdio.h>
#include "main.h"

/**
 * _strlen - count the length of a string 
 * @s : string 
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
int count = 0;

for (; *s++;)
{
count++;
}
return (count);
}
