#include "main.h"

/**
 * _isupper - Function to check for uppercase character
 *
 * @c: Character to be checked for uppercase
 *
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'B')
		return (1);
	else
		return (0);
}
