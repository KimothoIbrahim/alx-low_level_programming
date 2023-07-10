#include "main.h"

/**
 * create_file - Makes a new file.
 * @filename: filename pointer.
 * @text_content: pointer to string .
 *
 * Return: on sucess 1 on failure - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdesc, text_content, len);
	if (fdesc == -1 || w == -1)
		return (-1);

	close(fdesc);
	return (1);
}
