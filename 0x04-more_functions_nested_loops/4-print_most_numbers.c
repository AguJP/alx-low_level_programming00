#include "main.h"

/**
 * print_most_numbers - function to print numbers 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if ((i) != ('2' || '4'))
			_putchar(i);
		else
			;
		i++;
	}
	_putchar('\n');
}
