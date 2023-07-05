#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of number using recursion
 * @n: number to square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (function2(n, 0));
}

/**
 * function2 - recurse to find square root
 * @n: number to square root
 * @i: number to iterate
 * Return: Square root
 */

int function2(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (function2(n, i + 1));
}
