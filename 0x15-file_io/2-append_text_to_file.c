#include "main.h"

/**
 * append_text_to_file - attach text to end of a file.
 * @filename: pointer to file
 * @text_content: descibed
 *
 * Return: -1 failure Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, d, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	d = write(p, text_content, len);

	if (p == -1 || d == -1)
		return (-1);
	close(p);
	return (1);
}
