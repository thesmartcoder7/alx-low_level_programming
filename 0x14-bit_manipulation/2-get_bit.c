#include "main.h"

/**
 * get_bit - this function gets the value of a bit at a given index.
 *
 * @n: the number to check.
 * @index: the index to get the value at.
 *
 * Return: the value of the bit at index if successful . . .
 *         else . . . -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
