#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @s1: The string
 * Return: A pointer of capitalized string
 */

char *cap_string(char *s1)
{
	int i = 0;

	while (s1[i])
	{
		while (!(s1[i] >= 'a' && s1[i] <= 'z'))
		{
			i++;
		}
		if (s1[i - 1] == ' ' || s1[i - 1] == '\t' || s1[i - 1] == '\n' ||
		s1[i - 1] == ',' || s1[i - 1] == ';' || s1[i - 1] == '.' ||
		s1[i - 1] == '!' || s1[i - 1] == '?' || s1[i - 1] == '"' ||
		s1[i - 1] == '(' || s1[i - 1] == ')' || s1[i - 1] == '{' ||
		s1[i - 1] == '}' || i == 0)
		{
			s1[i] = s1[i] - 32;
		}
		i++;
	}
	return (s1);
}
