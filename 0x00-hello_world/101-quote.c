#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: error 1
 *
 * Description: This program prints stuff to the standard error
*/

int main(void)
{
    char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(1, s, 59);
    return (1);
}
