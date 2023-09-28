#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 *			x raised to the power of y.
 * @x: base
 * @y: power
 *
 * Return: x multiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}

