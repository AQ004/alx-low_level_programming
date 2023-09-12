#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum1 = 0, sum = 0, num1 = 0, num2 = 1;

	for (i = 0; i < 32; i++)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
			sum1 += sum;
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
