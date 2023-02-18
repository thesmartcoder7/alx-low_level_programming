#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
			++character;
		putchar(character);
		++character;
	}
	putchar('\n');

	return (0);
}
