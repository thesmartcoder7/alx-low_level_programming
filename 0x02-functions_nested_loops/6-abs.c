#include "main.h"
/**
 * _abs - Entry point
 *
 * @number: checks input of the function
 *
 * Description: this program computes the absolute value on an number
 *
 * Return: Always 0 (Success)
*/
int _abs(int number)
{
	if (number < 0)
		number *= -1;

	return (number);
}

