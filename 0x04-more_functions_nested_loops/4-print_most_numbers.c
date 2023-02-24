#include"main.h"

/**
 * print_most_numbers - entry point to function
 *
 * Description: this program prints selective numbers
 *
 * Return: always (0)
*/

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; ++number)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + 48);
	}
	_putchar('\n');
}
