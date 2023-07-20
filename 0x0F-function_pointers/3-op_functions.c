#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - uses the % operator on 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
