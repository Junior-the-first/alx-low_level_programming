#include "main.h"

/**
 * strstr - function that locates a substring
 * @haystack - string
 * @needle - substring
 * return - always 0
 */
 
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return(0);
}
