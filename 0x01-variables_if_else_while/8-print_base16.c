#include <stdio.h>

/**
 * main - Print all numbers from 0 to 9 using putchar
 * Return: Always (success)
 */
int main(void)
{
int i;

for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i + 'a' - 10);
}
}
putchar('\n');
return (0);
}
