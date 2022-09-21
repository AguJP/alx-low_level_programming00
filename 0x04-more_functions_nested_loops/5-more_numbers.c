#include "main.h"

/**
 * more_numbers - function to print numbers 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
