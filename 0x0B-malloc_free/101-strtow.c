#include <stdlib.h>
#include "main.h"

/**
 * word_count - function to count the number of words in a string
 * @str: string
 *
 * Return: number of words in a string
 */

int word_count(char *str)
{
	int i, j, w;

	j = 0;
	w = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			j = 0;
		}
		else if (j == 0)
		{
			j = 1;
			w++
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to a string or NULL
 */

char **strtow(char *str)
{
	char **x, *tmp;
	int i, j = 0, l = 0, words, m = 0, s, e;

	while (*(str + l))
		l++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	x = (char **) malloc(sizeof(char *) * (words + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				e = i;
				tmp = (char *) malloc(sizeof(char)* (m + 1));
				if (tmp == NULL)
					return (NULL);

				while (s < e)
				{
					*tmp++ = str[s++];
				}
				*tmp = '\0';
				x[j] = tmp - m;
				j++;
				m = 0;
			}
		}
		else if (m++ == 0)
			s = i;
	}
	x[j] = NULL;
	return (x);
}
