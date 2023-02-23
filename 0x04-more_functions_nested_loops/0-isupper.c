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
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
