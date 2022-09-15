#include "main.h"

/**
 * main - Entry point
 *
 * Description: Program to print the alphabet in lower case
 *
 * Return: Program to return 0 (Success)
 */

int main(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return(0);
}
