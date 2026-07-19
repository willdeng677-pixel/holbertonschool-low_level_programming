#include "main.h"

/**
 * _menset: fills memory with constatnt byte
 * s: is the memory to fills
 * n: variable holding byte of int
 *
 * return: output the memory area fills
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
