#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *	need to flip to get from one number to another
 * @n: 1st number.
 * @m: 2nd number.
 *
 * Return: number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipCounter = 0;
	unsigned long int XOR = n ^ m;

	while (XOR)
	{
		flipCounter += XOR & 1;
		XOR >>= 1;
		/* Equivalent to XOR = XOR >> 1 */
	}
	return (flipCounter);
}

