#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: This is a program that prints all numbers less than 9
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%i", number);
		++number;
	}
	printf("\n");

	return (0);
}
