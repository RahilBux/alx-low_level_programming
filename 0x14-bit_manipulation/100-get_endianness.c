#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *e = (char *) &j;

	return (*e);

}
