#include "main.h"

/**
 * _strncpy - copies a string up to size n
 * @dest: destination of string
 * @src: string to copy
 * @n: size of string
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *destcopy = dest;

	for (; n > 0 && *src != '\0'; n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (destcopy);
}
