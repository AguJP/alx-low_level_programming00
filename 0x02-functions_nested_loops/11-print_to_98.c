#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * @n: the starting point of numbers to be printed
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	else
		while (n >= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}

}
