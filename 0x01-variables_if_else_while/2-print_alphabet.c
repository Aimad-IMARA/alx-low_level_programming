#include <stdio.h>

/**
 * main - Print all the alphabets from a to z
 * Return: Always (success)
 */
int main(void)
{
char c;

for (c = 'a';  c <= 'z';    c++)
{
    putchar(c);
}

putchar('\n');
return (0);
}
