#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: string to evaluate
 *
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}
