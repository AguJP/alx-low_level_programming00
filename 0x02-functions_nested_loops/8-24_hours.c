#include "main.h"

/**
 * jack_bauer - function to print every minute
 *
 *Return: 0
 */

void jack_bauer(void)

{
	int hr = 0;
	int mn = 0;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			if (hr <= 9)
			{
				_putchar('0');
			}
			_putchar(hr + '0');
			_putchar(':');
			if (mn <= 9)
			{
				_putchar('0');
			}
			_putchar(mn + '0');
			_putchar('\n');
		}
	}
	
}
