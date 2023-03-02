/**
 * _strncat - function name
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Description: this function concatenates two strings
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int size, i;

	size = 0;

	while (dest[size])
		size++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[size + i] = src[i];

	dest[size + i] = '\0';

	return (dest);
}
