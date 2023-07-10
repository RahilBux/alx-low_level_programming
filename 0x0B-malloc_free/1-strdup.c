#include <stdlib.h>
#include "main.h"

/**
 * strdup - returns a pointer to a newly allocated memory slot
 * @str: string to copy to new memory slot
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	char *ctr = str;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*ctr != '\0')
	{
		ctr++;
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);


	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
