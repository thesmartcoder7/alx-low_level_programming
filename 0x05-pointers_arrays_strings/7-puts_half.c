#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: void
*/

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; ++len)
		;

	if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	else
	{
		for (n = ((len - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
