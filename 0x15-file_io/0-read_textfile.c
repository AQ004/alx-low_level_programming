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
	char Buffer[1024 * 8];

	if (filename == NULL || !letters)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	/* read write O_RDWR */
	n = read(fileDescriptor, Buffer, letters);
	n = write(1, Buffer, n);

	close(fileDescriptor);
	return (n);
}

