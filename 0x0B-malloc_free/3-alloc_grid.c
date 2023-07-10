#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * each element should be initialized to 0
 * @width: number of elements in each array
 * @height: number of arrays
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int array[height][width];
	int *ptr = array;
	int i;
	int j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (ptr);
}
