#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @num: this is the number input
 *
 * Description: this is a program to print the last digit of a number
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		last_digit = -1 * (num % 10);
	else
		last_digit = num % 10;

	_putchar (last_digit + '0');
	return (last_digit);
}

