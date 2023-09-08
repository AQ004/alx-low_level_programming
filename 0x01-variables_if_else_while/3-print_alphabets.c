# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C Program that prints small & capital letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i = 'a';

	for (; i < 'z';)
		putchar(i);
	for (char j = 'A'; j < 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
