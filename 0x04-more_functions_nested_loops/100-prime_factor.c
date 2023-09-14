#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j, size = 612852475143;

	for (i = 2; i < size; i++)
	{
		if (size % i == 0)
		{
			size = size / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
