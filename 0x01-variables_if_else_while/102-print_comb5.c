#include <stdio.h>

/**
 * main - prints all possible different combinations of four digits
 * Return: Success
 */
int main(void)
{
int i, j, k, l;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 8; j++)
{
for (k = 0; k <= 9; k++)
{
for (l = 1; l <= 9; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
