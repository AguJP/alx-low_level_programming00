#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: size of triangle
 * Return: a triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int m;

	if (size >= 1)
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar('.');
			}
			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
