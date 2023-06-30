#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s1: string to be encoded
 * Return: pointer to encoded string
 */

char *rot13(char *s1)
{
	char L[] =
		"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char R[] =
		"NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i;
	int n;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s1[i] == L[n])
			{
				s1[i] = R[n];
				break;
			}
		}
	}
	return (s1);
}
