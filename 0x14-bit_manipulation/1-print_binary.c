#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in decimal form
 */

void print_binary(unsigned long int n)
{
	int total_bits = sizeof(n) * 8; /* Total number of bits in n */
	int bits_printed = 0; /* Number of bits that have been printed */
	int bit;

	/**
	 * Iterate over each bit in n from the most significant bit
	 * to the least significant bit
	 */
	for (bit = total_bits - 1; bit >= 0; bit--)
	{
		/* If the bit is set */
		if (n & 1L << bit)
		{
			_putchar('1');
			bits_printed++;
		}
		/* If the bit is not set and a bit has been printed */
		else if (bits_printed)
			_putchar('0');
	}
	/* If no bit has been printed, print '0' */
	if (!bits_printed)
		_putchar('0');
}

