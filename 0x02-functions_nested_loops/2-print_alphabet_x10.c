/* function to print the alphabets 10x */

#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
