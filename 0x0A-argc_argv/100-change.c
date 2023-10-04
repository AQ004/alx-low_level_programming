#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * Return: (1) if more than one arg, else (0)
 */

int main(int argc, char *argv[])
{
	int a, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	while (a >= 25)
		count++, a -= 25;
	while (a >= 10)
		count++, a -= 10;
	while (a >= 5)
		count++, a -= 5;
	while (a >= 2)
		count++, a -= 2;
	while (a >= 1)
		count++, a -= 1;
	printf("%d\n", count);
	return (0);
}

