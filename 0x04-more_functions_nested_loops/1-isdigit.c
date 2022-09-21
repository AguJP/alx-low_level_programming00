#include "main.h"

/**
 * _idigit  - Function to check for digit 0 to 9
 *
 * @c: Character to be checked for digit
 *
 * Return: 1 if c is digit otherwise return 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
