#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted
 */

int _atoi(char *s)
{
	int i, d, v, l, f, di;

	i = 0;
	d = 0;
	v = 0;
	l = 0;
	f = 0;
	di = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (i < l && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			di = s[i] - '0';
			if (d % 2)
			{
				di = -di;
			}
			v = v * 10 + di;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (v);
}

/**
 * main - multiplies two numbers in argument
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if Success and 1 if there are less than or more than 2 arguments
 */

int main(int argc, char *argv[])
{
	int sum1;
	int sum2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum1 = _atoi(argv[1]);
	sum2 = _atoi(argv[2]);
	result = sum1 * sum2;

	printf("%d\n", result);
	return (0);
}
