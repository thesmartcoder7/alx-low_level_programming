#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: print stuff into the standard error;
 *
 * Return: error 1.
*/

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, 59);
	return (1);
}
