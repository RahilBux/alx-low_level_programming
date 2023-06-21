#include <stdio.h>

/**
 * main - prints value of even numbers in fibonacci
 * Return: 0(Success)
 */
int main(void)
{
	int c;
	unsigned long f1 = 1, f2 = 2, sum = 0, sum2;

	for (c = 1; c <= 33; c++)
	{
		if (f1 < 4000000 && (f1 % 2) == 0)
		{
			sum = sum + f1;
		}
		sum2 = f1 + f2;
		f1 = f2;
		f2 = sum2;
	}
	printf("%lu\n", sum);
	return (0);
}
