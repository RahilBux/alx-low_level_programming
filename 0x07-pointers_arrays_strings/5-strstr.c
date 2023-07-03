#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: searches in this string
 * @needle: string to search for in haystack
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
