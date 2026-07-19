#include "main.h"

/**
 * _memcpy: copies memory area
 * @dest: destination of the copy memory area
 * @src: source of memory area
 * @n: number byte to be copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
