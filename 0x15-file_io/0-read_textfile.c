#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read from a file and write to STDOUT
 * @filename: what to read
 * @letters: how many letters to read
 * Return: number of bytes written. on failure return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *container;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	container = malloc(sizeof(char) * letters);
	t = read(fd, container, letters);
	w = write(STDOUT_FILENO, container, t);

	free(container);
	close(fd);
	return (w);
}
