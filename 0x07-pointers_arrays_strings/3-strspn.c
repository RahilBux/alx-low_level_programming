#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s - string to be checked
 * @accept - bytes to compare to s
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (k);
			}
		}
	}
	return (k);
}
