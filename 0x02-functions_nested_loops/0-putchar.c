#include <main.h>
#include <unistd.h>
/**
 * Program that prints putchar
 * printing: c
 * Return 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
