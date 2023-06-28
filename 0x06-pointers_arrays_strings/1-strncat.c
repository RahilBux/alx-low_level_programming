#include "main.h"

/**
 * _strncat - concatenates two strings up to n
 * @dest: append to
 * @src: append from
 * @n: size of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (src[j] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
