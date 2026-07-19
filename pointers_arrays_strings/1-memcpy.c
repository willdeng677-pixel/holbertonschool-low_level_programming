#include "main.h"

/**
 * _memcpy function copy memory area
 * dest: destination of the copy memory area
 * src: source of memory area
 *
 * return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = arc[i];
	}

	return (dest);
}
