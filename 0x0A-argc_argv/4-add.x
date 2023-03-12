#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of only positive numbers
 * @argc: desc
 * @argv: desc
 *
 * Return: always returns 0 upon success
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
				sum += atoi(argv[i]);
			else
			{
				printf("Error \n");
				return (1);
			}
		}

		printf("%d \n", sum);
	}
	else if (argc == 1)
		printf("0 \n");

	return (0);
}
