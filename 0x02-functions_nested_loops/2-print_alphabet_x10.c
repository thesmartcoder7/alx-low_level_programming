#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: This is a program that prints the alphabet in lowercase
 *
 * Return: Always 0 ( success )
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		char character = 'a';

		while (character <= 'z')
		{
			_putchar(character);
			++character;
		}
		_putchar('\n');
	}
}

