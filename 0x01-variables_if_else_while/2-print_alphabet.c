#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that print the alphabet
 * Return: 0(Success)
 */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
