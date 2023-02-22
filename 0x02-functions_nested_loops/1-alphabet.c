#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: This is a program that prints the alphabet in lowercase
 *
 * Return: Always 0 ( success )
*/

void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		_putchar(character);
		++character;
	}
	_putchar('\n');
}
