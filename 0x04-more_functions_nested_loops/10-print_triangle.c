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
	int k = size;
	int l;
	int m = 0;
	int n;

	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				k--;
				m++;
				for (l = 0; l <= k; l++)
					_putchar('.');
				for (n = 0; n <= m; n++)
					_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
