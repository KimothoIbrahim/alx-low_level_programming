#include <stdio.h>
#include "main.h"

/**
 * main - prints all recieved arguments
 * @argc: number of input arguments
 * @argv: array of input arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

