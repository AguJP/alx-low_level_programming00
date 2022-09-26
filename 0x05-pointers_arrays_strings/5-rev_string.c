#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string variable
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0;
	int i;
	int j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	char ch[c];

	for (j = c - 1; j >= 0; j--)
	{
		ch[n] = s[j];
		n++;
	}

}
