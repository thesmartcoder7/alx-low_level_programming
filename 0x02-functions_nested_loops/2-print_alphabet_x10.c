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
	char character = 'a';
	int i = 0;

	while (i < 10)
	{
		while (character <= 'z')
		{
			_putchar(character);
			++character;
		}
	}

	_putchar('\n');
}

