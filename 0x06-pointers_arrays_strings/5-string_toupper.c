/**
 * string_toupper - funciton name
 *
 * @s : pointer to input char
 *
 * Description: this funciton uppercases a string
 *
 * Return: @s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
