#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @s -the memory area
 * @b - the constant byte
 * @n - number of bytes
 * return - changed array with n value for changing bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i=0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return(s);
}
