#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to char
 *
 * Return: number of string,
 * 0 If no numbers in the string
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');
		else if (number > 0)
			break;
		s++;
	}
	return (sign * number);
}

