#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: no. of arguments
 * @argv: char array
 *
 * Return: (0) if argc = 3, else (1)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

