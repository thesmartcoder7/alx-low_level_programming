#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: input binary number.
 * Return: 0 if b is NULL or contains chars not 0 or 1 . . .
 *         else . . . it returns the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int smc_num = 0;
	int sm_len = 0;

	if (b[sm_len] == '\0')
		return (0);

	while ((b[sm_len] == '0') || (b[sm_len] == '1'))
	{
		smc_num <<= 1;
		smc_num += b[sm_len] - '0';
		sm_len++;
	}

	return (smc_num);
}
