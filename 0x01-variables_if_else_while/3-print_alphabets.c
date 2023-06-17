#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a-z and A-Z
 * Return: 0(Success)
 */
int main(void)
{
	int num = 97;
	int num2 = 65;

	while (num <= 122)
	{
		putchar(num++);
	}
	while (num2 <= 90)
	{
		putchar(num2++);
	}
	putchar('\n');
	return (0);
}
