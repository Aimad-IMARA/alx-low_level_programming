#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Success
 */
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
    putchar(i + '0');
for (j = i+1 ; j <= 9;j++)
{
    putchar(j + '0');
    putchar(',');
    putchar(' ');
}
}

putchar('\n');

return 0;
}