#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space containing
 *           a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
        return (NULL);

	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];

		copy[length] = '\0';

	return (copy);
}
