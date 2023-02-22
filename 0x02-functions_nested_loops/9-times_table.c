#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int row, column;

	for (row = 0; row < 10; ++row)
	{
		for (column = 0; column < 10; ++column)
		{

			int product = row * column;

			if (column > 0)
			{
				if (product < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if (product >= 10)
				_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);

			if (column > 8)
			{
				_putchar('\n');
			} else
			{
				_putchar(',');
			}
		}
	}
}

