#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 * Return: success
 */
void reverse_array(int *a, int n)
{
	int x;
	int cmp;

	x = 0;
	n = n - 1;

	while (x < n)
	{
		cmp = a[x];
		a[x] = a[n];
		a[n] = cmp;
		x++;
		n--;
	}
}
