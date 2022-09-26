#0;276;0c#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @s: string variable
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	for (j = c - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
