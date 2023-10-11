#include "dog.h"
#include <stdlib.h>

/**
 *main - free dog - free mem
 *
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
