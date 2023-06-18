#include <stdio.h>

/**
 * main - prints all single digit numbers
 * Return: 0(Success)
 */
int main(void)
{
	int num = 48;
	int comma = 44;

	while (num <= 57)
	{
		putchar(num);
		num++;
		if (num < 58)
		{
			putchar(comma);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
