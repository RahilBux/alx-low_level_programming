#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * ...: any number of ints
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list arr;
	unsigned int i;
	int sum = 0;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arr, unsigned int);
	}
	va_end(arr);

	return (sum);
}
