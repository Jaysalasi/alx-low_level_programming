#include "main.h"
#include <stdio.h>

/**
 * print_array - prints num of elements in array
 *
 * @a: int
 * @n: int
 *
 * Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
