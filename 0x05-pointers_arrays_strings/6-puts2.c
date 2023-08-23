#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
int s;
for (s = 0; str[s] != '\0'; s++)
{
if (s % 2 == 0)
putchar(str[s]);
}
putchar('\n');
}
