#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: string pointer input
 * @b: char input variable
 * @n: number of bytes to use . . .
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
