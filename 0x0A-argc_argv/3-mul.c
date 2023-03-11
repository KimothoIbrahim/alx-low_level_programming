#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of input
 * @argc: desc
 * @argv: edsc
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{	int mul, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;

		printf("%d \n", mul);
	}
	else
	{
		printf("ERROR \n");
		return (1);
	}

	return (0);
}
