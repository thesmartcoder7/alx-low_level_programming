#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: checks input of function
 *
 * Description: the program checks if input is an alphabet.
 *
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	return ((c >= 98 && c <= 122) || (c >= 65 && c <= 90));
}

