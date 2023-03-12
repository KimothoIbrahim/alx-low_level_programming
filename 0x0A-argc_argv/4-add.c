#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 * @argc: desc
 * @argv: desc
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				int s = atoi(argv[i]);

				sum += s;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
