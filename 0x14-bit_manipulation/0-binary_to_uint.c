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
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
