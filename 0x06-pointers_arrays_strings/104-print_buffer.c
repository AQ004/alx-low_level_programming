#include "main.h"

/**
 * Hexedecimals - void function
 * @b: character pointer ( buffer )
 * @ten_bytes: row
 * @characters: characters that will be taken
 */

void Hexedecimals(char *b, int ten_bytes, int characters)
{
	int i = 0;

	while (i < 10)
	{
		if (i < characters)
			printf("%02x", *(b + i + ten_bytes));
		else
			printf("  ");
		if (i % 2 != 0)
			printf(" ");
		i++;
	}
}

/**
 * ASCII - void function
 * @b: character pointer ( buffer )
 * @ten_bytes: row
 * @characters: characters that will be taken
 */

void ASCII(char *b, int ten_bytes, int characters)
{
	int ch, i = 0;

	while (i < characters)
	{
		ch = *(b + i + ten_bytes);
		if (!(ch >= 32 && ch <= 126))
			ch = '.';
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - void function
 * @b: character pointer ( buffer )
 * @size: size
 *
 * Description: function that prints a buffer.
 */

void print_buffer(char *b, int size)
{
	int ten_bytes, characters;

	if (size > 0)
		for (ten_bytes = 0; ten_bytes < size; ten_bytes += 10)
		{
			characters = (size - ten_bytes < 10) ? size - ten_bytes : 10;
			printf("%08x: ", ten_bytes);
			Hexedecimals(b, ten_bytes, characters);
			ASCII(b, ten_bytes, characters);
			printf("\n");
		}
	else
		printf("\n");
}
