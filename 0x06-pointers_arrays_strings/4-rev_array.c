/**
 * reverse_array - function name
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Description: this function that reverses an array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp, f, l;

	f = 0;
	l = n - 1;

	while (f < l)
	{
		temp = a[f];
		a[f] = a[l];
		a[l] = temp;
		f++;
		l--;
	}
}
