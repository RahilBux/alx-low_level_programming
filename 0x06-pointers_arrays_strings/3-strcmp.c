#include "main.h"

/**
 * strcmp - compares two strings lexicographically
 * @s1: string 1
 * @s2: string 2
 * Return: 0(Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
