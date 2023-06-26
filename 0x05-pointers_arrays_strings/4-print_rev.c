#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		s++;
		i++;
	}
	s--;
	while (i > 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
