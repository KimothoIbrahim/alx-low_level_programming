#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog structure
 * @d: pointer to dog structure
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
