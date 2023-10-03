#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: fgh
 * @argv: jkl
 *
 * Return: 0 or 1 ..
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, le = 0, mon = atoi(argv[1]);
		int cen[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mon >= cen[i])
			{
				le += mon / cen[i];
				mon %= cen[i];
				if (mon % cen[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", le);
	}
	else
		printf("Error\n"), return (1);
	return (0);
}

