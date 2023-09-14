#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long i, j, size = 612852475143;

	for (i = 2; i < size; i++)
	{
		if (size % i == 0)
		{
			size = size / i;
		}
	}
	printf("%lu\n", i);
	return (0);
}
