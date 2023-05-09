#include "main.h"

/**
 * append_text_to_file - adds given text string at the end of a file.
 * @filename: name input of the file to operate on.
 * @text_content: given string to be added to file.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, written, app;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	app = open(filename, O_WRONLY | O_APPEND);
	written = write(app, text_content, length);

	if (app == -1 || written == -1)
		return (-1);

	close(app);
	return (1);
}
