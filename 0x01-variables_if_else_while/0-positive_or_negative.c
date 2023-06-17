#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A programme that gets a random number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d > 0\n", n);
	}
	else if (n == 0)
	{
		printf("%d = 0\n", n);
	}
	else
	{
		printf("%d < 0\n", n);
	}
	return (0);
}
