#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go here */

/* betty-style doc for function main goes there */
/**
 * main - check the last digit
 * Return: Always successful
 */
int main(void)
{
int n, lastN;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastN = n % 10;
    /* your code goes here */

if (lastN > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
}
else if (lastN == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastN);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN);
}

return (0);
}
