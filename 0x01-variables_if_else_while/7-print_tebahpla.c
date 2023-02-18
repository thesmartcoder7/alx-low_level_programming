#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: this program that prints the lowercase
 * alphabets in reverse
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		--character;
	}
	putchar('\n');

	return (0);
}
