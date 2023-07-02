#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates passwords from 101-crackme
 *
 * Return: 0(Success)
 */

int main(void)
{
	int password[100];
	int i, s, j;

	s = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		s += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - s) - '0' < 78)
		{
			j = 2772 - s - '0';
			s += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
