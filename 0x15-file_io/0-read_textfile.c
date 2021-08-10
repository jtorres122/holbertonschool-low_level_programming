#include "main.h"

/**
 * read_textfile- function
 * @filename: parameter
 * @letters: parameter
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len, counter;
	char *buf;

	buf = malloc(letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	len = read(fd, buf, letters);

	if (fd == -1 || len == -1)
		return (0);

	counter = write(STDOUT_FILENO, buf, len);

	if (counter == -1)
		return (0);

	close(fd);

	return (counter);
}
