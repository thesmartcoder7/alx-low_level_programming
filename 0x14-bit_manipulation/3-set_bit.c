#include "main.h"

/**
 * set_bit - this function sets the value of a bit at a given index to 1.
 *
 * @n: input pointer to the bit.
 * @index: the index whose value is to be changed.
 *
 * Return: (1) is successful . . . else . . . (-1).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
