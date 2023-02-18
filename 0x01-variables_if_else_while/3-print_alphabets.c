#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: Always 0 ( success )
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	/* prints all lower */
	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}

	/* prints all upper */
	while (upper <= 'Z')
	{
		putchar(upper);
		++upper;
	}

	putchar('\n');

	return (0);
}
