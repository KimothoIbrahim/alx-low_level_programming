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

	a = malloc(sizeof(str));

	if (a == NULL)
	{
		printf("Error : Malloc malfunctioned \n");
		return (NULL);
	}
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		a[i] = *(str + i);
	}

	return (a);
}
