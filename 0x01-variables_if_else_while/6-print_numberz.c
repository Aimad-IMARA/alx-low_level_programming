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
}

putchar('\n');
return (0);
}
