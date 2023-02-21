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
	char word[8] = "_putchar";
	char newline[0] = "";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
	}

	_putchar(newline);

	return (0);

}


