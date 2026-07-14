#include "main.h"

/**
*Returns the length of a string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

return (length);
}
