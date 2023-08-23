#include <stdio.h>
#include "main.h"

/**
 * _strlen - count the length of a string 
 * @s : string 
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
char tmp = *s;
int count = 0;
while (tmp != '\0')
{
tmp++;
count++;
}
return count;
}
