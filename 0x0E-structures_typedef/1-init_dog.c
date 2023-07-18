#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
