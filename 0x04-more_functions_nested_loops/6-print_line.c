#include "main.h"

/**
 * print_line - function to print a straight line
 * @n: number of times to print '_'
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n >= 1)
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');

}
