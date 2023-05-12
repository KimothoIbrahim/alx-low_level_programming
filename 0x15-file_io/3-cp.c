#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *
 *
 */

int main(int argc, char *argv[])
{
	int fileDesc1, fileDesc2, ci, c2;
	int reads, written;
	char *contents;

	if (argc != 3)
	{
		dprintf(2, "usge %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fileDesc1 = open(argv[1], O_RDONLY);

	if (fileDesc1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fileDesc2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);

	if (fileDesc2 == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	contents = malloc(sizeof(char) * 1024);

	while ((reads = read(fileDesc1, contents, 1024)))
	{
		written = write(fileDesc2, contents, reads);
		if (written == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	free(contents);

	ci = close(fileDesc1);
	if (ci == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileDesc1);
		exit(100);
	}

	c2 = close(fileDesc2);
	if (c2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileDesc1);
		exit(100);
	}

	return (0);
}
