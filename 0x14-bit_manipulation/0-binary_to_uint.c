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
	int str_length = 0;

	if (b == NULL)
		return (0);

	if (b[str_length] == '\0')
		return (0);

	while ((b[str_length] == '0') || (b[str_length] == '1'))
	{
		num <<= 1;
		num += b[str_length] - '0';
		str_length++;
		if (b[str_length] == '\0')
			break;
		if (b[str_length] != '0' && b[str_length] != '1')
			return (0);
	}
	return (num);
}
