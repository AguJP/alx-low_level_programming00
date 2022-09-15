#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Program to print the alphabet in lower case
 *
 * Return: Program to return 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
