#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @num: integer
 *
 * Description: check the code.
 *
 * Return: Always 0 (Success)
*/

void print_to_98(int num)
{
	int i;

	if (num > 98)
	{
		for (i = num; i > 98; --i)
			printf("%d, ", i);
	} else
	{
		for (i = num; i < 98; ++i)
			printf("%d, ", i);
	}
	printf("98\n");
}

