#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name of dog;
	d->age = age;
	d->owner = owner;
}
