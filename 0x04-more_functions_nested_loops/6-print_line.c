#include"main.h"

/**
 * print_line - function name
 *
 * @n: input for multiplier
 *
 * Description: this function draws a straight line
 *
 * Return: always (0)
*/

void print_line(int n)
{
	int underscore;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (underscore = 1; underscore <= n; ++underscore)
			_putchar('_');
		_putchar('\n');
	}
}
