#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _numCheck - look for a number in string
 * @str: given string
 *
 * Return: always 0
 */

int _numCheck(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int counter = 1, convertedInt, sum = 0;

	while (counter < argc)
	{
		if (_numCheck(argv[count]))
		{
			convertedInt = atoi(argv[count]);
			sum += convertedInt;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
