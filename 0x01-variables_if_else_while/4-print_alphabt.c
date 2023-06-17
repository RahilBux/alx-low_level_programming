#include <stdio.h>

/**
 * main - print alphabets excluding 'e' and 'q'
 * Return: 0(Success)
 */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		if (num != 101 && num != 113)
		{
			putchar(num);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
