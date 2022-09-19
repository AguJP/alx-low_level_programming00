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
	while (n >= 10)
	{
		n /= 10;
	}

	return (n);

}
