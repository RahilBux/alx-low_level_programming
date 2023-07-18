#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to create a new struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: a pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogptr;

	dogptr = malloc(sizeof(dog_t));
	if (dogptr == NULL)
		return (NULL);

	dogptr->name = name;
	dogptr->age = age;
	dogptr->owner = owner;

	return (dogptr);
}
