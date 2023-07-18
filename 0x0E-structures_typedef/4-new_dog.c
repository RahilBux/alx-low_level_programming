#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination of copied string
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * new_dog - creates a struct of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogptr;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dogptr = malloc(sizeof(dog_t));
	if (dogptr == NULL)
		return (NULL);

	dogptr->name = malloc(sizeof(char) * (len1 + 1));
	if (dogptr->name == NULL)
	{
		free(dogptr);
		return (NULL);
	}

	dogptr->owner = malloc(sizeof(char) * (len2 + 1));
	if (dogptr->owner == NULL)
	{
		free(dogptr);
		free(dogptr->name);
		return (NULL);
	}
	_strcpy(dogptr->name, name);
	_strcpy(dogptr->owner, owner);
	dogptr->age = age;

	return (dogptr);
}
