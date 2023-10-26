#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number.
 * @index: the index of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	/**
	 * Set the bit at index by taking bitwise OR
	 * with a mask that has the bit at index set
	 */
	*n = *n | (1UL << index);
	return (0);
}

