#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize struct dog
 * @d: pointer to dog structure
 * @name: pointer to the name of dog.
 * @age: age of dog
 * @owner: pointer to owner dog
 * Return: void
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
