#include <stdio.h>

/**
 * main - print arguments it receives.
 * @argc: num of arguments.
 * @argv: ar of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	/* body */
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

