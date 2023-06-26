#include "main.h"

/**
 * swap_int - swaps the value for two integers
 * @a: 1st value
 * @b: value to be swapped with a
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
