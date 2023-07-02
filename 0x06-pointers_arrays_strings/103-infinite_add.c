#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char t;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		t = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = t;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer
 */

char *infinite_add(char *n1, char* n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, di = 0;
	int v1 = 0, v2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp = v1 + v2 + over;
		if (temp >= 10)
			over = 1;
		else
			over = 0;
		if (di >= (size_r - 1))
			return (0);
		*(r + di) = (temp % 10) + '0';
		di++;
		j--;
		i--;
	}
	if (di == size_r)
		return (0);
	*(r + di) = '\0';
	rev_string(r);
	return (r);
}
