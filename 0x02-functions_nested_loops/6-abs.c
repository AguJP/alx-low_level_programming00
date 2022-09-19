#include "main.h"

/**
 * _abs - function to print the absolute value of a number
 *
 * @n: number to determine absolute value
 *
 *return: 0
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
