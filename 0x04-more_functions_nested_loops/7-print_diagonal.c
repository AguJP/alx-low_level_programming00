#include "main.h"

/**
 * print_diagonal - function to print a diagonal line
 * @n: number of times to print '\'
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
	}

}
