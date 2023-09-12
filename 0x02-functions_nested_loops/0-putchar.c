#include "main.h"

/**
 * main - Entry point.
 *
 * Description: C Program prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(word) - 1; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
