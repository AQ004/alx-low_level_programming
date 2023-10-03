#include <stdio.h>

/**
 * main - Entry point.
 * @argc: no of arg.
 * @argv: array of arg and fileName.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	/*	body	*/
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

