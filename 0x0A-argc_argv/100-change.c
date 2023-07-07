#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints number of coins need to make change for an amount
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int value;
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);
	result = 0;

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && value >= 0; i++)
	{
		for (; value >= coins[i];)
		{
			result++;
			value -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
