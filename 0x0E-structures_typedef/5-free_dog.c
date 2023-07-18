#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a struct of dog
 * @d: struct to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
