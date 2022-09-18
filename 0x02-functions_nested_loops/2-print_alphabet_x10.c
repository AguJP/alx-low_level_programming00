/* function to print the alphabets 10x */

#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet_x10: 'Program to print 10 times the alphabet in lowercase'
 *
 * Return: Program to return 0 (Success)
 */

/* Program to print alphabet in lowercase 10 times */
void print_alphabet_x10(void)
/* Program to print alphabet in lowercase 10 times */
{
	int i;
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
