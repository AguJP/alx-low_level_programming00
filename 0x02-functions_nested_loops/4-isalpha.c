#include "main.h"

/**
 * _isalpha - function to check if a character is an alphabet
 *
 * @c: parameter used to check if character is an alphabet
 *
 * Return: 0
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
