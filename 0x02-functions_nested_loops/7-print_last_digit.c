#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: value to be checked
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
