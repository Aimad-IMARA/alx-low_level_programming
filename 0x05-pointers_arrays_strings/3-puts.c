#include <stdio.h>
#include "main.h"

/**
 * _puts - print the string passed
 * @str: string
 * Return: nothing.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
