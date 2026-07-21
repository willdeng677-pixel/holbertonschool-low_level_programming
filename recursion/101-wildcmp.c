#include "main.h"

/**
 * wildcmp_helper - compares two strings recursively
 * @s1: first string
 * @s2: second string containing wildcard
 *
 * Return: 1 if strings match, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		return (wildcmp_helper(s1, s2 + 1) ||
			(*s1 != '\0' && wildcmp_helper(s1 + 1, s2)));
	}

	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1));

	return (0);
}

/**
 * wildcmp - compares two strings with wildcard support
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
