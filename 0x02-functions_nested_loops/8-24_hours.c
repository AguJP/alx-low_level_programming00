#include "main.h"

/**
 * jack_bauer - function to print every minute
 *
 *Return: 0
 */

void jack_bauer(void)

{
	int h;
	int m;

	for(h = 0; h < 60; h++)
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
				_putchar('0');
			_putchar(h);
			_putchar(':');
			if (m < 10)
				_putchar('0');
			_putchar(m);
			_putchar('\n');
		}

}
