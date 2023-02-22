
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
	int frst, scnd, i;

	frst = 1;
	scnd = 2;

	i = 0;

	printf("%d, %d, ", frst, scnd);
	while (i < 48)
	{
		int fibo = frst + scnd;

		printf("%d", fibo);


		if (i < 47)
			printf(", ");

		scnd = frst;
		frst = fibo;
		++i;
	}
	printf("\n");

	return (0);
}


