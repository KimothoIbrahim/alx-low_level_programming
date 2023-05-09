#include "main.h"

/**
 * create_file - function that craetes a file
 * @filename: file name to be created
 * @text_content: pointer to content to be write to created file.
 *
 * Return: on success return 1; on failure return -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[len];)
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(fd, text_content, length);

	if (file_descriptor == -1 || written == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}

