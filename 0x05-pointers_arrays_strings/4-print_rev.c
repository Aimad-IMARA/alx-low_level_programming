#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: nothing.
 */
void print_rev(char *s)
{
int i,j;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
for (j = i - 1; j >= 0; j--)
{
putchar(s[j]);
}
putchar('\n');
}
