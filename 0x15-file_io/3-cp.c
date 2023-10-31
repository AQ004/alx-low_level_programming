#include "main.h"

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: asd
 */

int main(int argc, char **argv)
{
	int FileStart = 0, FileEnd = 0;
	ssize_t n;
	char buf[1024];

	/* 3 */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	FileStart = open(argv[1], O_RDONLY);
	if (FileStart == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);
	FileEnd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	if (FileEnd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* loop */
	while ((n = read(FileStart, buf, 1024)) > 0)
		if (write(FileEnd, buf, n) != n)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (n == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);

	/* close */
	FileStart = close(FileStart);
	FileEnd = close(FileEnd);
	if (FileStart)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FileStart), exit(100);
	if (FileEnd)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FileStart), exit(100);

	return (EXIT_SUCCESS);
}
