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

	i = n % 10;
	if (i < 0)
	{
		i *= -1;
	}


	return (i);

}
