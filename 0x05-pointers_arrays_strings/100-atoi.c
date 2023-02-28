/**
 * _atoi - function name
 *
 * @s: string type input parameter
 *
 * Return: converted string as integer
*/

int _atoi(char *s)
{
	unsigned int number = 0;
	int prefix = 1;

	do {
		if (*s == '-')
			prefix *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);

	return (number * prefix);
}
