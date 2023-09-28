#include "main.h"

/**
 * sqrt_func - function that returns the natural square root of a number.
 * @n: number.
 * @i: iterator.
 *
 * Return: sqrt
 */

int sqrt_func(int n, int i)
{
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_func(n, i + 1));
}

/**
 * _sqrt_recursion - int function return sqrt_func
 * @n: number.
 *
 * Return: sqrt_func
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	return (sqrt_func(n, i));
}

