#include "main.h"

/**
 * print_triangle - function name
 *
 * @size: input size of the triangle
 *
 * Description: prints a triangle of specific size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, s;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (s = 1; s <= size; s++)
		{
			if (s <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

