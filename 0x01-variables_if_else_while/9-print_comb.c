/* Program to print combination of digits 0 to 10 using putchar */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print combination of numbers 0 to 10 using putchar
 *
 * Return: Program to return 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
			putchar(',', ' ');
	}
	putchar('\n');

/* Program to return 0 (Success) */
	return (0);
}
