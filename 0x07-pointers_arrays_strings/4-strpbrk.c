#include "main.h"

/**
 * strpbrk - function that searches a string for any of a set of bytes
 * @s - string
 * @accept - string
 * return - always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m];  m++)
		{
			if (*s == accept[m])
				return(s);
		}
		s++;
	}
	return ('\0');
}
