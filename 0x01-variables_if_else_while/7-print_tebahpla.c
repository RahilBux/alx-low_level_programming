#include <stdio.h>

/**
 * main - using putchar to print z-a
 * Return: 0(Success)
 */
int main(void)
{
	int num = 122;

		while (num >= 97)
		{
			putchar(num);
			num--;
		}
		putchar('\n');
		return (0);
}
