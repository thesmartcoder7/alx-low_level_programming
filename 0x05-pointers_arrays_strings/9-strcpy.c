/**
 * _strcpy - function name
 *
 * @src: source of string parameter input
 * @dest: destination of string
 *
 * Description: this function copies a string from one pointer to another
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
