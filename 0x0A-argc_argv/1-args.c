#include <stdio.h>
#include "main.h"

/**
 * main - entry to programe
 * @argc: string count parameter
 * @argv: array of strings parameter
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
