#include "main.h"

/**
 * Description: _islower function to check for lowercase characters
 *
 * @c: parameter used to check for lowercase
 *
 * Return: 1 if True, else return 0
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
