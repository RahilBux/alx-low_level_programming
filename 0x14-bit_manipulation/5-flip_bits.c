#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = x >> i;
		if (c & 1)
			num++;
	}
	return (num);
}
