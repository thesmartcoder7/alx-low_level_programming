#include<stdio.h>

/**
 * main - Main Function
 *
 * Description: program that prints all numbers less than 9
 * without using using type char
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		++number;
	}
	putchar('\n');

	return (0);
}
