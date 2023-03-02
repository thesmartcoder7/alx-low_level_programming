#include "main.h"

/**
 * rot13 - encodes a string in rot13
 *
 * @s: input string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char string_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char string_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; string_1[j] != '\0'; j++)
		{
			if (s[i] == string_1[j])
			{
				s[i] = string_2[j];
				break;
			}
		}
	}

	return (s);
}
