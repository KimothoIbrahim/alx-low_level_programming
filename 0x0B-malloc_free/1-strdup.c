#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy a string to memory
 * @str: string to be copied
 * 
 * Return: returns a pointer to created memory location
 */

char *_strdup(char *str)
{
	int i, strlen;
	char *a;

	for (strlen = 0; *(str + strlen) != '\0';  strlen++)
		strlen = strlen + 1;

	if(str == NULL)
		return (NULL);

	a = malloc(sizeof(char) * strlen);

	if (a == NULL)
	{
		printf("Error : Malloc malfunctioned \n");
		return (NULL);
	}
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		a[i] = *(str + i);
	}

	a[i + 1] = *(str + i + 1);

	return (a);
}
