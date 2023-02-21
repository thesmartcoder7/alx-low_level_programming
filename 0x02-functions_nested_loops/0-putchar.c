#include "main.h"

/**
* main - Entry point
*
* Description: This program prints "_putchar"
*
* Return: Always 0 ( success )
*/

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
	}

	_putchar('\n');

	return (0);

}


