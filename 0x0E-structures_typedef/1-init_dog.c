#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: points to struct dog
 * @name: name of dog to be initialized
 * @age: age of dog to be initialized
 * @owner: name of owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
