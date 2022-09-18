#include "main.h"

/**
 * Description: Function to check for lowercase characters
 *
 * Return: 0
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
