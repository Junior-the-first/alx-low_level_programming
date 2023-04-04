#include "main.h"

/**
 * memcpy - a function that copies memory area
 * @dest - the memory area that recieves
 * @src - the memory area that is copied from
 * @n - number of bytes
 * return - copied mery with changed bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return(dest);
}
