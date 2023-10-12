#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: argument counter.
 * @argv: argumrnt vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*function)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	function = get_op_func(argv[2]);
	if (!function)
		printf("Error\n"), exit(99);
	if (!num2 && (argv[2][0] == '%' || argv[2][0] == '/'))
		printf("Error\n"), exit(99);
	printf("%d\n", function(num1, num2));
	return (0);
}

