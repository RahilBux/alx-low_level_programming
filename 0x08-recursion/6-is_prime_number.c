#include "main.h"

/**
 * is_prime_number - determines if integer is a prime number
 * @n: number to be determined
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);

	return (prime_function(n, 2));
}

/**
 * prime_function - calculates prime number
 * @n: number to calculate
 * @i: number to iterate
 * Return: 1 or 0
 */

int prime_function(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i != 0)
		return (prime_function(n, i + 1));
	else if (n % i == 0)
		return (0);
	else
		return (0);
}
