#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_str - check if there are symbols in a string
 * @str: string to be checked
 * Return: 0 if string are only numbers and 1 if not
 */

int check_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - adds postive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int check;
	int i;
	int sum = 0;
	int str_to_int;

	for (i = 1; i < argc; i++)
	{
		check = check_str(argv[i]);
		if (check == 1)
		{
			printf("Error\n");
			return (1);
		}
		str_to_int = atoi(argv[i]);
		sum += str_to_int;
	}
	printf("%d\n", sum);
	return (0);
}
