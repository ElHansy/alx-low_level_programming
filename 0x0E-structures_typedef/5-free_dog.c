#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free allocation dog
 * @d: pointer to free dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
