#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 'a';

	for (; i < 10; i++)
		putchar(i + '0');
	for (; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
