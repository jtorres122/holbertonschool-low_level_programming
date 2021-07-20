#include "dog.h"

/**
 * free_dog - function
 * @d: parameter
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}