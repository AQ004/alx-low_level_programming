#include "main.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Return: 
 */

int main()
{
	if (argc != 3)
		printf("Error\n"), exit(98);
	if (isdigit(atoi(argv[1])) && isdiggit(atoi(argv[2])))
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	printf("Error\n"), exit(98);
}

