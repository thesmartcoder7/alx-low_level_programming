#include "main.h"

/**
 * print_sign - Entry point
 *
 * @num: checks input of function
 *
 * Description: this program prints the sign of a number.
 *
 * Return: Always 0 (Success)
*/

int print_sign(int num)
{
	int i;

	if (num < 0)
	{
		_putchar(45 + 0);
		i = -1;
	} else if (num > 0)
	{
		_putchar(43 + 0);
		i = 1;
	} else
	{
		_putchar(48 + 0);
		i = 0;
	}

	return (i);
}

