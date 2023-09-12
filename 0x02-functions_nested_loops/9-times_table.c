#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j > 9)
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
				if (j == 9)
					goto x;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i * j + '0');
				if (j == 9)
					goto x;
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) > 9)
					continue;
				_putchar(' ');
			}
		}
x:
		_putchar('\n');
	}
}
