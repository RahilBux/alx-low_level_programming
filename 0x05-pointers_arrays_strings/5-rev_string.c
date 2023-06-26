#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int n;

	while (s[c] != '\0')
	{
		c++;
	}
	for (n = 0; n < c; n++)
	{
		c--;
		rev = s[n];
		s[n] = s[c];
		s[c] = rev;
	}
}
