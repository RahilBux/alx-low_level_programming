#include "main.h"

/**
 * print_line - prints _ up to number of times entered
 * @n: number of times _ is added
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
