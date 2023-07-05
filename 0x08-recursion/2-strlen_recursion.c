#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
