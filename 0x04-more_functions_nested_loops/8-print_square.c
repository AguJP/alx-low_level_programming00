#include "main.h"

/**
 * print_square - function to print a square
 * @size: size of square
 * Return: a square
 */

void print_square(int size)
{
	int i;
	int j;

	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
