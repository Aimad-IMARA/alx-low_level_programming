#include <stdio.h>

/**
 * main - Print all numbers from 0 to 9 using putchar
 * Return: Always (success)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
