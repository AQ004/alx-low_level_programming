#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point.
 * @argc: arg count.
 * @argv: arg vec.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/* ptr is a pointer to the main function.*/
	/* It's cast to a char pointer to allow byte-by-byte access */
	int bytes;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	bytes = atoi(argv[1]);
	if (bytes < 0)
		printf("Error\n"), exit(2);
	for (; b;)
		printf("%02hhx%s", *p++, --b ? " " : "\n");
	return (0);
}

