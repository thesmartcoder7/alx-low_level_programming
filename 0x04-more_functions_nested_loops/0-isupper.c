#include <stdio.h>
/**
* _isupper - function to check for uppercase
*
* @c: Integer input parameter
*
* Description: This program checks if the parameter
*		input is uppercase of lower
*
* Return: either (1) or (0)
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
