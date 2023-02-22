#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: this is a program that prints every
 *		min of the day of Jack Bauer, starting
 *		from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int hr, min;

	for (hr =  0; hr < 24; ++hr)
	{

		for (min = 0; min < 60; ++min)
		{

			_putchar ((hr / 10) + 48);
			_putchar ((hr % 10) + 48);

			_putchar (':');

			_putchar ((min / 10) + 48);
			_putchar ((min % 10) + 48);
			_putchar ('\n');

		}

	}
}

