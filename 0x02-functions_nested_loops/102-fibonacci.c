#include <stdio.h>

/**
 * main - prints first 50 fibonacci sequence
 * Return: 0(Success)
 */
int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (c == 49)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
		}
	}
	return (0);
}
