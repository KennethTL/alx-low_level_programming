#include <string.h>
#include "main.h"

int check_palindrome(char *s, int left, int right);

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to be evaluated
 *
 * Return: 1 if string is a palindrome, otherwise 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - check if chars in a string form a palindrome
 * @s: string to be evaluated
 * @left: left side of string
 * @right: right side of string
 *
 * Return: 1 if true, 0 if false
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	} else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}

	return (0);
}
