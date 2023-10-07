#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: exit(98)__printf
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}

