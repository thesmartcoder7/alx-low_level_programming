#include <unistd.h>

/**
 * _putchar - the function writes the input character to stdout
 *
 * @c: input parameter to be printed
 *
 * Return: 1 if successful else -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
