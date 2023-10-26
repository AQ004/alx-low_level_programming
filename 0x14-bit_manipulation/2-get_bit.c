#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number in decimal Form
 * @index: is the index of the bit you want to get.
 *
 * Return: value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is greater than the number of bits in n */
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

