#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n - 98
 * @n: number to be checked
 * Return: numbers to 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
