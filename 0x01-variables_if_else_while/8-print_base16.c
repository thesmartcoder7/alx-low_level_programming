#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: this is a program that prints all
 * the numbers of base 16
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int number = 48;

	while (number <= 102)
	{
		putchar(number);

		if (number == 57)
			number += 39;
		++number;
	}
	putchar('\n');

	return (0);
}
