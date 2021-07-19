#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
