#include <stdio.h>

/**
 * main - prints all unique combinations of 3 numbers
 * Return: 0(Success)
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (o = 50; o <= 57; o++)
			{
				if (o > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != 55 || m != 56 || o != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
