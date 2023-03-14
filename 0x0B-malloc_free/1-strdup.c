#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 * 
 */

char *_strdup(char *str)
{
	int i;
	char *a;

	if(str == NULL)
		return (NULL);

	a = malloc(sizeof(str) + 1);

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
