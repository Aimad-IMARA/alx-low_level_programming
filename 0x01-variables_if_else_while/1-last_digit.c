#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - check the last digit
 * Return: always successful
 */
int main(void)
{
    int n, lastN;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    lastN = n % 10;
    printf("Last digit of %d is %d ", n, lastN);
    if (lastN > 5)
    {
        printf("and is greater than 5/n");
    }
    else if (lastN == 0)
    {
        printf("and is 0/n");
    }
    else
    {
        printf("and is less than 6 and not 0/n");
    }

    return (0);
}