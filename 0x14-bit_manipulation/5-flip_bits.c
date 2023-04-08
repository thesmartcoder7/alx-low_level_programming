#include "main.h"

/**
 * flip_bits - this function gets the number of bits required
 *             to get from one number to another.
 *
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: the number of bits flips to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m, bits_req = 0;

	while (k > 0)
	{
		bits_req += (k & 1);
		k >>= 1;
	}

	return (bits_req);
}
