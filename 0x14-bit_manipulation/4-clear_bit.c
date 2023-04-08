#include "main.h"

/**
 * clear_bit - this function sets the value of a bit at a given index to 0.
 *
 * @n: input pointer to the bit.
 * @index: the index whose value is to be changed.
 *
 * Return: (1) is successful . . . else . . . (-1).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
