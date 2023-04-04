#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - print dog structure
 * @d: pointer to dog structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %p \n", NULL);
		else
			printf("Name: %s\n", d->name);
		if (d->name == NULL)
			printf("Name: %p \n", NULL);
		else
			printf("Age: %.1f\n", d->age);
		if (d->name == NULL)
			printf("Name: %p \n", NULL);
		else
			printf("Owner: %s\n", d->owner);
	}
}
