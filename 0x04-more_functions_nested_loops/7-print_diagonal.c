#include "main.h"

/**
 * print_diagonal - prints a diagonal line in terminal
 * @n: number of diagonal lines
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (b == a)
				{
					_putchar('\\');
				}
				else if (b < a)
				{
				_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

