/**
 * _strcat - function name
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Description: this function concatenates two strings.
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int d_len, index;

	d_len = 0;
	while (dest[d_len])
		d_len++;

	for (index = 0; src[index] ; index++)
		dest[d_len++] = src[index];

	return (dest);
}
