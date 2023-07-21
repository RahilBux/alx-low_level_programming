#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: string to be printed in between the strings
 * @n: the number of strings passed
 * @...: A variable number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	char *str;
	unsigned int i;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arr);
}
