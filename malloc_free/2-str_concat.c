#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    unsigned int len1 = 0;
    unsigned int len2 = 0;
    unsigned int i;
    unsigned int j;

    if (s1 != NULL)
    {
        while (s1[len1] != '\0')
            len1++;
    }

    if (s2 != NULL)
    {
        while (s2[len2] != '\0')
            len2++;
    }

    result = malloc((len1 + len2 + 1) * sizeof(char));

    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < len2; j++)
        result[len1 + j] = s2[j];

    result[len1 + len2] = '\0';

    return (result);
}
