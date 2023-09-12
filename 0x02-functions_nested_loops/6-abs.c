#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: integer number
 *
 * Return: -n if negative, else n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
