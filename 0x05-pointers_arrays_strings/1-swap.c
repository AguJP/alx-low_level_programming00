#include "main.h"

/**
 * swap_int - function to swap values of two int variables
 * @a: first variable
 * @b: second variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
