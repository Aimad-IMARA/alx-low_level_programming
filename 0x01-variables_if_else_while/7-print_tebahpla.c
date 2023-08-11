#include <stdio.h>

/**
 * main - Print all numbers from 0 to 9 using putchar
 * Return: Always (success)
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}

putchar('\n');
return (0);
}
