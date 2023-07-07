#include "main.h"

/**
 * _strchr - locates a character in a string
 * and then returns value from that character
 * @s: pointer of the string
 * @c: character to be located in the string
 * Return: modified string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
