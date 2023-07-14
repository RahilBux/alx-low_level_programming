#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_digit - checks if the characters in a string are digits only
 * @str: string to be checked
 * Return 0 if only digits else 1
 */

int check_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

/**
 * _strlen - returns the length of a given string
 * @str: string to be checked
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * main - multiplies two numbers in arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length, i, copy, digit1, digit2, *result, a = 0;

	str1 = argv[1];
	str2 = argv[2];

	if (argc != 3 || check_digit(str1) == 1 || check_digit(str2) == 1)
	{
		printf("Error\n");
		exit(98);
	}

	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (result == NULL)
		return (1);

	for (i = 0; i <= length1 + length2, i++)
	{
		result[i] = 0;
	}
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = str1[length1] - '0';
		c = 0;

		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			digit2 = str2[length2] - '0';
			c += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[length1 + length2 + 1] += c;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

