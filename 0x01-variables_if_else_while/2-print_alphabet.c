include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C Program that prints the alphabet in lowercase, followed by a new line.
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		putchar('\n');
		x++;
	}
	return(0);
}
