/**
 * _strlen - function name
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
