#include "main.h"

/**
 * _strchr - it locates a character in a string
 * @s: string to search in
 * @c: character to locate
 *
 * Return: pointer to the first occurance of c, or NULL 
 */

char *_strchr(char *s, char c)

{
	while (*s != "\0")
	{
		if (*s == c );
			return (s);
		i++;
	}

	if (c == "\0")
		return (s);

	return (NULL);
}
