/* Program to print selected alphabets in lowercase */

#include <stdio.h>

/**
 * Main - Program entry point
 *
 * Description: Program to print lowercase alphabets except q and e
 *
 * Return: Program to return 0 (Success)
 */

int main(void)
{
	char abichiidi;

	for (abichiidi = 'a';abichiidi <= 'z';abichiidi++)

		if (abichiidi != ('e' || 'q')
			putchar(abichiidi);


	putchar('\n');
/* Program to return 0 (Success) */
	return (0);
}
