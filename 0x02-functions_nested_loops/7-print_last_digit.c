#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 *
 * @n: parameter to print the last digit
 *
 * Return: 0
 */

int print_last_digit(int n)

{
	int i;

	if (n < 0)
	{
		n *= -1;
	}

	i = n % 10;

	return (i);

}
