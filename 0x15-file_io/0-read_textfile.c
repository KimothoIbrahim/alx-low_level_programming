#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads and prints read text to standard output
 * @filename: file to read from
 * @letters: characters to be read from file
 *
 * Return: number of read/printed characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *container;
	ssize_t file_descriptor, read, written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	container = malloc(sizeof(char) * letters);
	read = read(file_descriptor, container, letters);
	written = write(STDOUT_FILENO, container, read);

	free(container);
	close(file_descriptor);
	return (written);
}
