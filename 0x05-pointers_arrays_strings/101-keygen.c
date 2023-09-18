#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	char s;

	srand(time(NULL));
	for (;sum <= 2635; sum += s)
	{
		s = rand() % 128;
		putchar(s);
	}
	putchar(2672 - sum);
	return (0);
}
