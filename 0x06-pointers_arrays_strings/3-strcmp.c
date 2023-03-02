/**
 * _strcmp - function name
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Description: this function compares two strings
 *
 * Return: returns an integer indicating the result of the comparison,
 *         as follows:
 *                 • 0, if the s1 and s2 are equal;
 *                 • a negative value if s1 is less than s2;
 *                 • a positive value if s1 is greater than s2.
 *                 The strncmp() function is similar, except it compares
 *                 only the first (at most) n bytes of s1 and s2.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, r_val;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r_val = s1[i] - s2[i];
			break;
		}
		else
		{
			r_val = s1[i] - s2[i];
		}
		i++;
	}

	return (r_val);
}
