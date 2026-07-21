#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_helper - checks whether a string is a palindrome
 * @s: string
 * @left: left index
 * @right: right index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (palindrome_helper(s, left + 1, right - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (palindrome_helper(s, 0, len - 1));
}
