#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * and points to a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy from string 2
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	int j;
	int total1 = 0;
	int total2 = 0;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		total1++;
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		total2++;
	}

	ptr = malloc(total1 + total2 + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
