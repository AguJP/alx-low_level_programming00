/* Program to print lower and uppercase alphabets */

#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: Program to print lower and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abichiidi;

	for (abichiidi = 'a'; abichiidi <= 'z'; abichiidi++)
		putchar(abichiidi);

	for (abichiidi = 'A'; abichiidi <= 'Z'; abichiidi++)
		putchar(abichiidi);

	putchar('\n');

	/* Program to return 0 (Success) */
	return (0);
}
