/**
 * swap_int - function name
 *
 * @x: first input parameter
 * @y: second input parameter
 *
 * Description: this function swaps the values
 *		of two integers
 *
 * Return: void
*/

void swap_int(int *x, int *y)
{
	int dummy;

	dummy = *x;
	*x = *y;
	*y = dummy;
}

