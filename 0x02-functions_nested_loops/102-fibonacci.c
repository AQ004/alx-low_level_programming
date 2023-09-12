#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long double num1 = 1, num2 = 2, sum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%.0Lf", num1);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
