#include "main.h"

/**
 * get_endianness - this checks for endianness . . .
 *					. . . whatever that means.
 * Return: (1) if true . . . else (0).
 */

int get_endianness(void)
{
	int a = 1;
	char *smc_e = (char *)&a;

	if (*smc_e == 1)
		return (1);

	return (0);
}
