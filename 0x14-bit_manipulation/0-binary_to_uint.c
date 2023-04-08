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
	unsigned int ttl, pow;
	int len;

	if (n == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, ttl = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (n[len] == '1')
			ttl += pow;
	}

	return (ttl);
}
