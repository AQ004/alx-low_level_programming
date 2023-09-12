#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: integer number that times table endes with
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j > 9)
				{
					_putchar(i * j / 10 + '0');
					_putchar(i * j % 10 + '0');
					if (j == n)
						goto x;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(i * j + '0');
					if (j == n)
						goto x;
					_putchar(',');
					_putchar(' ');
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
}
