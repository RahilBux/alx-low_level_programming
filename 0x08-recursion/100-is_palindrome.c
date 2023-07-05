#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 0 if the string is not a palindrome and 1 if it is
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (pal_check(s, 0, strlength_recursive(s)));
}

/**
 * strlength_recursive - calculates length of the string using recursive
 * @s: string
 * Return: Length of the string
 */

int strlength_recursive(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength_recursive(s + 1));
}

/**
 * pal_check - checks the characters of the string for a palindrome
 * @s: string to check
 * @i: number to iterate
 * @length: length of string
 * Return: 1 if palindrome and 0 if not
 */

int pal_check(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (pal_check(s, i + 1, length - 1));
}
