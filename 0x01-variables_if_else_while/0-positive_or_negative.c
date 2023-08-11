#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	/*
	 * main - Prints if number is positive, zero or negative
	 * Return: Always (Success)
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) /* if the number is positive */
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0) /* if the number is negative */
	{
		printf("%d is zero\n", n);
	}
	else /* when the number is 0 */
	{
		printf("%d is negative\n", n);
	}
	return (0); /*Indicate successful execution*/
}
