#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: error 1
 *
 * Description: This program prints stuff to the standard error
*/

int main(void)
{
    char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    fwrite(1, quo, 59);
    return (1);
}
