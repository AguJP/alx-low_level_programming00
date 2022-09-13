/* Program to print lowercase alphabet using putchar */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 *
 * Description: Program to print lowercase alphabet using Putchar
 *
 * Return: Program to return 0 (Success)
 */

int main(void)
{
	char abichiidi;

	for (abichiidi = 'z'; abichiidi <= 'a'; abichiidi--)
	{
		putchar(abichiidi);
	}
	putchar('\n');
/* Program to return 0 (Success) */
	return (0);
}
