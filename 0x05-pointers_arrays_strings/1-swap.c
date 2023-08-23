#include <stdio.h>
#include "main.h"

/**
 * swap_int : swap two pointers values
 * @a : pointer
 * @b : pointer
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
