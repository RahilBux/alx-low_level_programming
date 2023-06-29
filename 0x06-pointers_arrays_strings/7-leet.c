#include "main.h"

/**
 * leet - encode string into leet
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
