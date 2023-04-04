#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_dog - print dog structure
 * @d: pointer to dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		d->name = "(nil)";
		printf("Name: %s \n", d->name);
	}
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
		printf("Name: %s \n", d->owner);
	}
	else
		printf("Owner: %s\n", d->owner);
}
