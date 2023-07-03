#include "main.h"

/**
 * _memset - fill first n bytes of the memory pointed to by s
 * with a constant byte b
 * @s: string
 * @b: character to fill
 * @n: number of bytes to fill
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
