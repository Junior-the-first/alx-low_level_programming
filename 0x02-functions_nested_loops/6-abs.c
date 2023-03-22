#include "main.h"
/**
 * _abs - computes absolute value for integer
 * @c: The number to be compute
 * Return: Absolute value or 0 for anything else
 */
int _abs(int c)
{
        if (c < 0)
        {
		int abs_val;
                abs_val = c * -1;
		return (abs_val);
        }
        return (c);
}
