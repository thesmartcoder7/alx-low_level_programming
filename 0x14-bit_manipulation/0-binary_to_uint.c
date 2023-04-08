#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: input binary number.
 *
 * Return: 0 if b is NULL or contains chars not 0 or 1 . . .
 *         else . . . it returns the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int iter;
	unsigned int c_num;

	c_num = 0;
	if (!b)
		return (0);
	for (iter = 0; b[iter] != '\0'; iter++)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);
	}
	for (i = 0; b[iter] != '\0'; iter++)
	{
		c_num <<= 1;
		if (b[iter] == '1')
			c_num += 1;
	}
	return (c_num);
}
