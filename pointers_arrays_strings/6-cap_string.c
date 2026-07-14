#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int cap_next = 1;

	i = 0;

	while (str[i] != '\0')
	{
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		cap_next = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			cap_next = 1;
		}

		i++;
	}

	return (str);
}
