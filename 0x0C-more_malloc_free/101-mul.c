#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * multiplyBigNumbers - function multiplies large numbers.
 * @s1: first number.
 * @s2: second number.
 *
 * Return: mul
 */

char *multiplyBigNumbers(char *s1, char *s2)
{
	char *mul;
	int i, j, digit1, digit2, carry, resultLength;
	int lengthNum1 = 0, lengthNum2 = 0;

	while (s1[lengthNum1] != '\0')
		lengthNum1++;
	while (s2[lengthNum2] != '\0')
		lengthNum2++;
	i = lengthNum1, j = lengthNum2;
	mul = malloc(digit1 = resultLength = i + j);
	if (!mul)
		printf("Error\n"), exit(98);
	while (digit1--)
		mul[digit1] = 0;
	for (i--; i >= 0; i--)
	{
		if (!(s1[i] >= '0' && s1[i] <= '9'))
		{
			free(mul);
			printf("Error\n"), exit(98);
		}
		digit1 = s1[i] - '0', carry = 0;
		for (j = lengthNum2 - 1; j >= 0; j--)
		{
			if (!(s2[j] >= '0' && s2[j] <= '9'))
			{
				free(mul);
				printf("Error\n"), exit(98);
			}
			digit2 = s2[j] - '0';

			carry += mul[i + j + 1] + (digit1 * digit2);
			mul[i + j + 1] = carry % 10;

			carry /= 10;
		}
		if (carry)
			mul[i + j + 1] += carry;
	}
	return (mul);
}

/**
 * main - Entry point
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	char *result;
	int leading_zeros = 0, i, resultLength;
	int lengthNum1 = 0, lengthNum2 = 0;

	if (argc != 3)
		printf("Error\n"), exit(98);

	while (argv[1][lengthNum1] != '\0')
		lengthNum1++;
	while (argv[2][lengthNum2] != '\0')
		lengthNum2++;

	resultLength = lengthNum1 + lengthNum2;
	result = multiplyBigNumbers(argv[1], argv[2]);

	for (i = 0; i < resultLength; i++)
	{
		if (result[i])
			leading_zeros = 1;
		if (leading_zeros)
			putchar(result[i] + '0');
	}
	if (!leading_zeros)
		putchar('0');
	putchar('\n');
	free(result);
	return (0);
}

