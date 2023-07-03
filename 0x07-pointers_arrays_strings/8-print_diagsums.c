#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers in an array
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int size1, size2;

	size1 = 0;
	size2 = 0;

	for (i = 0; i < size; i++)
	{
		size1 = size1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		size2 = size2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", size1, size2);
}
