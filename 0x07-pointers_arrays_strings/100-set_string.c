#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to pointer that needs to be set
 * @to: the character to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
