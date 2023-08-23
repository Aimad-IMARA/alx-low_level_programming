#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: nothing.
 */
void print_rev(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}
