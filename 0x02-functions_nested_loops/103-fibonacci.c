#include <stdio.h>

/**
 * main - prints value of even numbers in fibonacci
 * Return: 0(Success)
 */
int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum, sum2;

	for (c = 0; c < 32; c++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		if (sum % 2 == 0)
		{
			sum2 = sum2 + sum;
		}
	}
	printf("%lu", sum2);
	return (0);
}
