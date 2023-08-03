#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer the unsigned long int
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 if success -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1 << index;

	if (index > 63)
		return (-1);

	*n = (bitmask | *n);

	return (1);
}
