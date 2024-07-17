#include "search_algos.h"

/**
 * interpolation_search - Searches for a value using interpolation algo
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 *
 * Return: index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, l, h;
	double f;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		f = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		position = (size_t)(l + f);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[position]);
		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			l = position + 1;
		else
			h = position - 1;

		if (l == h)
			break;
	}
	return (-1);
}
