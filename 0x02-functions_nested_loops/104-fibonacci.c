
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this program prints the first 100
 *		Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long frst, scnd, i, terms, next_fib_term;

	frst = 1;
	scnd = 2;
	terms = 100;
	next_fib_term = frst + scnd;

	i = 0;

	printf("%d, %d", frst, scnd);

	for (i = frst; i <= terms; ++i)
	{
		printf("%d, ", next_fib_term);
		frst = scnd;
		scnd = next_fib_term;
		next_fib_term = frst + scnd;
	}

	printf("\n");

	return (0);
}


