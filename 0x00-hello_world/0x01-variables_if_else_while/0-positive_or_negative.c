/* Program to  generate random numbers and determine their sign */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to generate random numbers and determine their sign
 *
 *Return: Always 0 (Success)
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive \n", n);
	else if (n < 0)
		printf("%d is negative \n", n);
	else printf("%d is zero \n", n);

/* Program returns 0 (success) */
	return (0);
}
