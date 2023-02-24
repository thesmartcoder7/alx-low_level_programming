#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Description - print the largest prime factor of 612852475143
 *
 * Return: Always (0)
*/

int main(void)
{
	long x, maximum_factor;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
			maximum_factor = number / x;
	}

	printf("%ld\n", maximum_factor);

	return (0);
}

