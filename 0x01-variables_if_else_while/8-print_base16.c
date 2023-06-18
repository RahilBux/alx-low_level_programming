#include <stdio.h>

/**
 * main - print hexadecimal base 16
 * Return: 0(Success)
 */
int main(void)
{
	int num1 = 48;
	int num2 = 97;

	while (num1 <= 57)
	{
		putchar(num1);
		num1++;
	}
	while (num2 <= 102)
	{
		putchar(num2);
		num2++;
	}
	putchar('\n');
	return (0);
}
