#include "dog.h"

/**
 * free-_dog - frees space allocated to structure and its pointers
 * @d - pointer to structure to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
