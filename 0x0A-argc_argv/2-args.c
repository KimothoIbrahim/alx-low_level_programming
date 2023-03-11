#include <stdio.h>

/**
 * main - function
 * @argc: desc
 * @argv: desc
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", *(argv + i));
	}

	return (0);
}
