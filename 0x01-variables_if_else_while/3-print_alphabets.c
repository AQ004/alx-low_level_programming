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
	char j = 'A';

	for (; i < 'z'; i++)
		putchar(i);
	for (; j < 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
