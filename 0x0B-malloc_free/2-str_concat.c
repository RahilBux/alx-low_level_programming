#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * the returned pointer should point to a newly allocated memory space
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int sum;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	sum = i + j;

	ptr = malloc(sizeof(char) * sum + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}
