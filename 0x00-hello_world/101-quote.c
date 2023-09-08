#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C Program that print a quote using the write function
 *	 int write(int fileDescriptor, void *buffer, size_t bytesToWrite)
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);
	return (1);
}
