#include <stdio.h>

/**
 * main - lists all natural numbers of 5 and 3 below 1024
 * Return: 0(Success)
 */
int main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
