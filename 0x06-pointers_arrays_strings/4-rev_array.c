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
		int tmp, index;

		for (index = n - 1; index >= n / 2; index--)
		{
				tmp = a[n - 1 - index];
				a[n - 1 - index] = tmp;
		}
}
