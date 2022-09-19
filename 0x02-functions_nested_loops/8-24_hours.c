#include "main.h"

/**
 * jack_bauer - function to print every minute
 *
 *Return: 0
 */

void jack_bauer(void)

{
	int h = 0;
	int m = 0;

	for (h = 0; h < 60; h++)
		for (m = 0; m < 60; m++)
		{
			if (h <= 9)
			{
				_putchar('0');
			}
			_putchar(h + '0');
			_putchar(':');
			if (m <= 9)
			{
				_putchar('0');
			}
			_putchar(m + '0');
			_putchar('\n');
		}

}
