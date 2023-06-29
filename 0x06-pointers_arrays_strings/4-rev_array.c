#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer of an array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int b;

	while (i < n)
	{
		i++;
	}
	i--;
	for (b = 0; b < i; b++, i--)
	{
		temp = a[b];
		a[b] = a[i];
		a[i] = temp;
	}
}
