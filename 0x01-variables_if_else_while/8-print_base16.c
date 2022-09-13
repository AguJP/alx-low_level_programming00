/* Program to print base16 digits from 0 to f using putchar */

#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Program to print base16 digit from 0 to f using putchar
 *
 * Return: Program to return 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');

/* Program to return 0 (Success) */
	return (0);
}
