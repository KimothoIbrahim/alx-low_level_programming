#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void fileCloser(int fd);

/**
 * make_buffer - makes a buffer of 1024 bytes.
 * @file: file name .
 *
 * Return: pointer to new buffer.
 */
char *make_buffer(char *file)
{
	char *bur;

	bur = malloc(sizeof(char) * 1024);

	if (bur == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bur);
}

/**
 * fileCloser - function to close a file descriptor.
 * @fdesc: File descriptor to close.
 */
void fileCloser(int fdesc)
{
	int z;

	z = close(fdesc:);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc);
		exit(100);
	}
}

/**
 * main - move contents from one file to other file.
 * @argc: count of args to program
 * @argv: array of pointers to all arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int start, end, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	r = read(start, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

	w = write(end, buffer, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}

	r = read(start, buffer, 1024);
	end = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	fileCloser(start);
	fileCloser(end);

	return (0);
}
