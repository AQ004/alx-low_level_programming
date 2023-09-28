#include "main.h"

/**
 * prime - function that returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: number.
 * @i: iterator.
 *
 * Return: 1 if prime, otherwise 0.
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		return (prime(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number - int function return prime function.
 * @n: number.
 *
 * Return: prime function
 */

int is_prime_number(int n)
{
	int i = 2;
	return (prime(n, i));
}

