/**
 * _isdigit - entry to function
 *
 * @c: function input
 *
 * Description: the program checks if for a digit 0-9
 *
 * Return: always (0)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
