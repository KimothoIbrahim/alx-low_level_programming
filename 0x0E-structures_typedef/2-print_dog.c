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
			printf("Name: %p \n", d->name);
		else
			printf("Name: %s\n", d->name);

		if (!d->age)
		{
			d->age = 0;
			printf("Age: %f \n", d->age);
		}
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Name: %p \n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
