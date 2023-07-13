#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant
 * @str: memory area to be filled
 * @b: character to fill memory
 * @n: number of times to copy
 */

void _memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}
}

/**
 * _calloc - creates a space in memory and sets it to 0
 * @nmemb: number of elements
 * @size: size in bytes of each element
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
