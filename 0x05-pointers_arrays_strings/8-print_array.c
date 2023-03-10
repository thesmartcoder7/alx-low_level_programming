#include"main.h"

/**
 * print_array - function name
 *
 * Description: prints n elements of an array of integers.
 *
 * @n: elements input parameter
 * @a: string input parameter
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
