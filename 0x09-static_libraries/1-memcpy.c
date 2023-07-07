#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination of copied bytes
 * @src: string to be copied up to n bytes
 * @n: number of bytes to copy
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
