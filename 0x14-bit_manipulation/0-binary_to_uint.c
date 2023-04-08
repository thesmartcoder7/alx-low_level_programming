#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: input binary number.
 *
 * Return: 0 if b is NULL or contains chars not 0 or 1 . . .
 *         else . . . it returns the converted number.
 */

unsigned int binary_to_uint(const char *n)
{
	unsigned int sm_i, sm_p;
	int sm_l;

	if (n == NULL)
		return (0);

	for (sm_l = 0; n[sm_l]; sm_l++)
	{
		if (n[sm_l] != '0' && n[sm_l] != '1')
			return (0);
	}

	for (sm_p = 1, sm_i = 0, sm_l--; sm_l >= 0; sm_l--, sm_p *= 2)
	{
		if (n[sm_l] == '1')
			sm_i += sm_p;
	}

	return (sm_i);
}
