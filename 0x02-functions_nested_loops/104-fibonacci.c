#include "main.h"

/**
 * numlength - calculate the length of any number
 * @num_s: the input of the function
 * Return: length of the number
 */

int numlength(int num_s)
{
	int length = 0;

	if (!num_s)
		return (1);
	while (num_s)
	{
		num_s = num_s / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter, initial_0s;
	unsigned long num1 = 1, num2 = 2, sum;
	unsigned long max = 100000000;
	unsigned long num1_ = 0, num2_ = 0, sum_ = 0;

	for (counter = 1; counter <= 98; counter++)
	{
	if (num1_ > 0)
		printf("%lu", num1_);
	initial_0s = numlength(max) - 1 - numlength(num1);

	while (num1_ > 0 && initial_0s > 0)
	{
		printf("%d", 0);
		initial_0s--;
	}

	printf("%lu", num1);

	sum = (num1 + num2) % max;
	sum_ = num1_ + num2_ + (num1 + num2) / max;
	num1 = num2;
	num1_ = num2_;
	num2 = sum;
	num2_ = sum_;

	if (counter != 98)
		printf(", ");
	else
		printf("\n");
	}
	return (0);
}
