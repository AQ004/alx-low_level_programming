#include "main.h"
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long largest_num, j, number = 612852475143;

	for (; number % 2 == 0; number /= 2)
		largest_num = 2;
	for (j = 3; j <= sqrt(number); j += 2)
	{
		while (number % j == 0)
		{
			largest_num = j;
			number /= j;
		}
	}
	if (number > 2)
		largest_num = number;
	printf("%lu\n", largest_num);
	return (0);
}
