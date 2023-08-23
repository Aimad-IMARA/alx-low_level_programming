#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
int it;
for (it = 0; it < n; it++)
{
if (it != n - 1)
{
printf("%d, ", a[it]);
}
else
{
printf("%d", a[it]);
}
}
printf("\n");
}
