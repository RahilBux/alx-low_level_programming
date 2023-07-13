#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int value to print from
 * @max: int value to print to
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int fill = 0;
	int copy = min;
	int *ptr;

	if (min > max)
		return (NULL);

	while (copy < max)
	{
		fill++;
		copy++;
	}
	copy += 1;

	ptr = malloc(sizeof(int) * copy);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
