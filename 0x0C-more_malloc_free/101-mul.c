#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply_no - program that multiplies two positive numbers.
 * @num1: first number.
 * @num2: second number.
 * @result: num1 times num2.
 */

void multiply_no(char *num1, char *num2, char *result)
{
	int i, j, sum, start = 0;
	int len1 = 0, len2 = 0;

	if (num1[0] == '0' || num2[0] == '0')
	{
		result[0] = '0';
		result[1] = '\0';
		return;
	}

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[len1 + len2] = '\0';

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] - '0';
			result[i + j + 1] = sum % 10 + '0';
			result[i + j] += sum / 10;
		}

	while (result[start] == '0' && start < len1 + len2 - 1)
		start++;
	for (i = 0; i < len1 + len2 - start; i++)
		result[i] = result[i + start];
	result[len1 + len2 - start] = '\0';
}

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: exit(98)__printf
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
		printf("Error\n"), exit(98);
	/*if not number exit with code 98*/
	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				printf("Error\n"), exit(98);
	/* Allocate a large enough array */
	char *result = malloc(4000 * sizeof(char));

	if (result == NULL)
		printf("Error\n"), exit(98);

	multiply_no(argv[1], argv[2], result);
	printf("%s\n", result);
	free(result);
	return (0);
}

