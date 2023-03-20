#include "dog.h"

/**
 * init_dog - initializes structure 'dog'
 * @d: ponter to structure
 * @name: name string
 * @age: dog age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
