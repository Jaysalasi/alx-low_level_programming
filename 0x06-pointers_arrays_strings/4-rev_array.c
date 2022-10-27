#include "main.h"

/**
 * reverse_array - reverse the content array of
 * an int
 * @a: array of int to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
