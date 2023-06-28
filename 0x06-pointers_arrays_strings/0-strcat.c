#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: append to
 * @src: append from
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
