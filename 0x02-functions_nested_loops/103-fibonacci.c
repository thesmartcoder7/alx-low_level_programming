#include"main.h"

/**
 * main - Entry point
 *
 * Description: this is a program that finds and
 *				prints the sum of the even-valued terms
 *				not exceeding 4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fibo_1 = 0, fibo_2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fibo_1 + fibo_2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fibo_1 = fibo_2;
		fibo_2 = sum;
	}

	printf("%.0f\n", total_sum);

	return (0);
}

