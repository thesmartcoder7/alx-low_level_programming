#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a program that prints the alphabet in lowercase
 *
 * Return: Always 0 ( success )
*/

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		++character;
	}
	putchar('\n');

	return (0);
}
