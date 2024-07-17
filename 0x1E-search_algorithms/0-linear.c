#include "search_algos.h"

/**
* linear_search - Searches for a value in an array using Linear search algo
* @array: Array to search
* @size: number of elements in the Array
* @value: Value to search for
*
* Return: index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		return (i);
	}
	return (-1);
}
