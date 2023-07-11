#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments to the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}

	l = l + ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
