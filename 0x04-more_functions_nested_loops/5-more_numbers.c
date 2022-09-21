#include "main.h"

/**
 * more_numbers - function to print numbers 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}