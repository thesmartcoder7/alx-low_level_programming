
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this program prints the first 50
 *		Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long frst, scnd, i;

	frst = 2;
	scnd = 1;

	i = 0;

	printf("%ld, %ld, ", scnd, frst);
	while (i < 48)
	{
		long fibo = frst + scnd;

		printf("%ld", fibo);


		if (i < 47)
			printf(", ");

		scnd = frst;
		frst = fibo;
		++i;
	}
	printf("\n");

	return (0);
}

