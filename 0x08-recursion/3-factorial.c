#include "main.h"

/**
 * factorial - calculates the factorial of a number using recursion
 * @n: number given
 * Return: factorial of the number given
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
