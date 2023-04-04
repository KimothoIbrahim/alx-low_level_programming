#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes structure 'dog'
 * @d: ponter to structure
 * @name: name string
 * @age: dog age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
