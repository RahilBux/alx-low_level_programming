#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: address to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}
