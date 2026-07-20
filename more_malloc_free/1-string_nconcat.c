#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int copy_len;
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

if (n >= len2)
copy_len = len2;
else
copy_len = n;

result = malloc((len1 + copy_len + 1) * sizeof(char));

if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < copy_len; j++)
result[len1 + j] = s2[j];

result[len1 + copy_len] = '\0';

return (result);
}
