# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C Program that prints the alphabet reversed in lowercase,
 *	followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
