#include "main.h"

/**
 * print_numbers - function to print numbers 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
}
