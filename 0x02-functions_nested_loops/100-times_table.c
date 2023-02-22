#include "main.h"

/**
 * print_times_table - print time table
 *
 * @num: integer input
 *
 * Description: computes and prints the sum of all the
 *		multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
*/

void print_times_table(int num)
{
	if (num >= 0 && num <= 15)
	{
		int row, column;

		for (row = 0; row <= num; ++row)
		{
			for (column = 0; column <= num; ++column)
			{
				additional(row, column, num);
			}

		}

	}
}

/**
 * additional - print advanced times table
 *
 * @row: integer input
 * @column: integer input
 * @n: integer input
 *
 * Description: program prints advanced times table
 *
 * Return: Always 0 (Success)
*/

void additional(int row, int column, int n)
{
	int product = row * column;
	int product_ = row * column;

	if (column > 0)
	{
		if (product >= 100)
		{
			_putchar(' ');
		}
		else if (product >= 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
	}

	if (product >= 100)
	{
		_putchar((product / 100) + 48);
		product -= (product / 100) * 100;
	}
	if (product >= 10)
	{
		_putchar((product / 10) + 48);
		product -= (product / 10) * 10;
	}
	else if (product_ >= 100)
		_putchar(48);
	_putchar((product + 48));
	if (column != n)
		_putchar(',');
	else
		_putchar('\n');
}
