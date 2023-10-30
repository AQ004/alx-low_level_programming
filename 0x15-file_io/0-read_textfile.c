#include "main.h"

/**
 * read_textfile - reads a txt file and prints it to the POSIX stdout.
 * @filename: name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t n;
	char Buffer[letters + 1];

	if (filename == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);
	n = read(fileDescriptor, Buffer, letters);
	if (n == -1)
		n == 0;
	else
		Buffer[n] = '\0';
	if (write(1, Buffer, n) != n)
		n = 0;
	close (fileDescriptor);
	return (n);
}

