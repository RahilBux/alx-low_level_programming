#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator, the string to be printed between numbers
 * @n: the number of ints passed to the function
 * @...: a Variable number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(arr, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arr);
}
