#include "main.h"

/**
 * print_binary - prints the given number in binary
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num != 0)
		{
			_putchar('0');
		}
	}
	if (num == 0)
	{
		_putchar('0');
	}
}
