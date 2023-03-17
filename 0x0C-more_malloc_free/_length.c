/**
 * _length - get the length of strings
 *
 * @str: string to get length of
 *
 * Return: length of string
*/

int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
