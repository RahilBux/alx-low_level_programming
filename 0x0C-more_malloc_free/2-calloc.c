#include <stdlib.h>
#include "main.h"

/**
 * _calloc - creates a space in memory and sets it to 0
 * @nmemb: number of elements
 * @size: size in bytes of each element
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		(int *) ptr[i] = 0;
	}
	return (ptr);
}
