#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int o;

	if (n < 0)
	{
		o = -n;
		_putchar('-');
	}
	else
	{
		o = n;
	}
	if (o / 10)
	{
		print_number(o / 10);
	}
	_putchar((o % 10) + '0');
}
