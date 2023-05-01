#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - join all arguments passed to program
 * @ac: number of args
 * @av: argument array
 *
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, totalCharacters = 0;
	char *pointer;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			totalCharacters++;
	}

	pointer = malloc(sizeof(char) * (totalCharacters + ac + 1));
	if (pointer == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			pointer[k] = av[i][j];
			k++;
		}
		pointer[k] = '\n';
		k++;
	}
	pointer[k] = '\0';

	return (pointer);
}
