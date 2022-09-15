/* function to print the alphabets 10x */
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Program to print the alphabets 10 times
 *
 * Return: Program to return 0 (Success)
 */

/* Program to print alphabet 10x */
void print_alphabet_x10(void)
/* Program to print alphabet 10x */
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
